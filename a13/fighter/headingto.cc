#include "fighter.ih"

void Fighter::headingTo(char direction, size_t reqDeg, 
                        double acceleration)
{
    double radians = Units::deg2rad(reqDeg);

    d_heading.turnTo(direction, radians, acceleration);
}
