#ifndef INCLUDED_MONITOR_
#define INCLUDED_MONITOR_

    // messages to the monitor are received on fifo '0'

#include <string>

#include "../limits/limits.h"
#include "../fightermap/fightermap.h"

class Monitor: private Limits
{
    FighterMap d_fighter;
    std::string d_fifo;

    public:
        Monitor(char const *dir);
        Monitor(Monitor const &other) = delete;

        void run();

    private:
        void insert(std::istringstream &instr); // 1st char already removed
        void remove(std::istringstream &instr); // 1st char already removed
};
        
#endif



