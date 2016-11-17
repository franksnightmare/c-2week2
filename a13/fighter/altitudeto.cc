#include "fighter.ih"

void Fighter::altitudeTo(size_t req, size_t rate)
{
    d_altitude.set(
            d_units.setAlt(req), 
            rate == 0 ? DEFAULT_CLIMBRATE : d_units.setRate(rate)
    );
}
