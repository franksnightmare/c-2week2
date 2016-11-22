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

	// keeps track of time-related info
    Time        d_time;
    Units       d_units;
    Coordinates d_coord;
    Speed       d_speed;
    Altitude    d_altitude;
    Heading     d_heading;

	// true: inside the box
    bool   d_inTheBox = false;

    static size_t s_nFighters;
    static size_t s_nRegisteredFighters;

    public:
        Fighter(RegisterData const &rd, 
				// 1
                int xCoord, int yCoord, int units);
        ~Fighter();

        void setUnits(int type);

        void altitudeTo(size_t altitude, size_t rate);
        void headingTo(char direction, size_t hdg,
			double acceleration);
        void speedTo(size_t kts);

		// default: no update time changes
        void info(size_t silentTime= 0); 
    private:
        void boxStatus();
};

#endif
