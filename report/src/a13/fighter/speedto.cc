#include "fighter.ih"

void Fighter::speedTo(size_t speed)
{
    d_speed.set(d_units.setSpeed(speed));
}
