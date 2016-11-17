#include "fighter.ih"

Fighter::~Fighter()
{
    --s_nRegisteredFighters;
    if (d_inTheBox)
        --s_nFighters;
}
