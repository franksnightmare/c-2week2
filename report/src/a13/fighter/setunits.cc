#include "fighter.ih"

void Fighter::setUnits(int type)
{
    d_units.setUnits(type);

    if (type == 'm')
        cerr << "Metric units: speeds: km/h, distances: km, "
                        "altitude: m, rates: m/s\n";
    else
        cerr << "Aviation units: speeds: kts, distances: NM, "
                        "altitude: ft, rates: ft/min.\n";
}

