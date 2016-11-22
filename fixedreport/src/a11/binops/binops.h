#ifndef BINOPS_H
#define BINOPS_H

#include "../addition/addition.h"
#include "../subtraction/subtraction.h"

class Binops: public Addition, public Subtraction
{
	public:
		~Binops() {};
};

#endif
