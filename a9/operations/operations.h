#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "binops.h"

class Operations: public Binops
{
    friend Binops;
    
    private:
		void add(Operations const &rhs);
		void sub(Operations const &rhs);
};

#endif
