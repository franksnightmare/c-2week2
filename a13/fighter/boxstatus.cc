#include "fighter.ih"

void Fighter::boxStatus()
{
    switch (d_coord.boxCheck())     // alert when entering or leaving the box
    {
        case Coordinates::ENTERING:
            d_inTheBox = true;
            ++s_nFighters;
        break;

        case Coordinates::LEAVING:
            d_inTheBox = false;
            --s_nFighters;
        // FALLING THRU for default: no changes

        default:
        break;
    }
}
