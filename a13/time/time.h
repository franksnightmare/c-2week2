#ifndef INCLUDED_TIME_
#define INCLUDED_TIME_

#include <iosfwd>

#include "../limits/limits.h"

class Time: private Limits
{
    size_t d_TOtime = 0;    // take-off time

    size_t d_delta;         // time elapsed since the previous update;
    size_t d_time;          // time in seconds at the last update

    static size_t s_sec;    // clock-time set by updateTime()

    public:
        Time();
        void step();                // update the time for a Fighter
        size_t elapsed() const;     // since take-off
        void registerTOtime();      
        size_t delta() const;
        size_t fuelRemaining() const;
        static void updateTime();   // called by Monitor::childProcess before 
                                    // updating the Fighters' data
        static size_t clock();      // returns the common clock-time
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
