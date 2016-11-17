#include "fighter.ih"

Fighter::Fighter(RegisterData const &rd,
                 int xCoord, int yCoord, int units)
:
    d_rd(rd),
    d_coord(xCoord, yCoord, d_units),
    d_speed(d_time, d_coord, d_units),
    d_altitude(d_time, d_coord, d_speed, d_units),
    d_heading(d_time, d_speed, d_coord, d_altitude, d_units)
{
    ++s_nRegisteredFighters;

    setUnits(units);

    cerr 
        << "Registered Fighter,  callName: " <<
                d_rd.callName <<", balance: " << d_rd.balance << 
                 " (at " << d_units.plainDist(d_coord.x()) << ", " << 
                            d_units.plainDist(d_coord.y()) << ").\n"
            "#fighters in the box: " << s_nFighters << " (out of " <<
                s_nRegisteredFighters << ").\n";
}




