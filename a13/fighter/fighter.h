#ifndef INCLUDED_FIGHTER_
#define INCLUDED_FIGHTER_

#include "../limits/limits.h"
#include "../time/time.h"
#include "../coordinates/coordinates.h"
#include "../speed/speed.h"
#include "../altitude/altitude.h"
#include "../heading/heading.h"
#include "../registerdata/registerdata.h"
#include "../units/units.h"


class Fighter: private Limits
{
    RegisterData d_rd;

    Time        d_time;             // keeps track of time-related info
    Units       d_units;
    Coordinates d_coord;
    Speed       d_speed;
    Altitude    d_altitude;
    Heading     d_heading;

    bool   d_inTheBox = false;      // true: inside the box

    static size_t s_nFighters;
    static size_t s_nRegisteredFighters;

    public:
        Fighter(RegisterData const &rd, 
                int xCoord, int yCoord, int units);       // 1
        ~Fighter();

        void setUnits(int type);

        void altitudeTo(size_t altitude, size_t rate);
        void headingTo(char direction, size_t hdg, double acceleration);
        void speedTo(size_t kts);

        void info(size_t silentTime= 0);        // default: no update time 
                                                // changes
    private:
        void boxStatus();
};

#endif
