#ifndef INCLUDED_TIME_
#define INCLUDED_TIME_

#include <iosfwd>

#include "../limits/limits.h"

class Time: private Limits
{
    size_t d_TOtime = 0;    // take-off time
    
    // time elapsed since the previous update;
    size_t d_delta;
    size_t d_time;
    // time in seconds at the last update

	// clock-time set by updateTime()
    static size_t s_sec;

    public:
        Time();
        // update the time for a Fighter
        void step();                
        // since take-off
        size_t elapsed() const;     
        void registerTOtime();      
        size_t delta() const;
        size_t fuelRemaining() const;
        // called by Monitor::childProcess before 
        // updating the Fighters' data
        static void updateTime();   
                                    
		// returns the common clock-time
        static size_t clock();      
};

inline Time::Time()
:
    d_time(s_sec)
{}
        
inline size_t Time::delta() const
{
    return d_delta;
}

inline size_t Time::elapsed() const
{
    return d_time - d_TOtime;
}

inline size_t Time::fuelRemaining() const
{
    return (FUEL_EMPTY - elapsed()) / 60;
}

inline size_t Time::clock()
{
    return s_sec;
}

#endif
