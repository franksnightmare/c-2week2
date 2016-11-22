#include "monitor.ih"

void Monitor::insert(istringstream &instr)      // 1st char already removed
{
    RegisterData data;

    instr >> data.pin >> data.callName >> data.balance;

    d_fighter.insert(data.pin, new Fighter(data, 0, 0, 'a'));
}
