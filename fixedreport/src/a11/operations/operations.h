#ifndef OPERATIONS_H_
#define OPERATIONS_H_

#include "../binops/binops.h"

class Operations: public Binops
{
	friend Binops;
	friend Addition;
	friend Subtraction;
    
	friend Operations operator+(Operations const &lhs,
		Operations const &rhs);
	friend Operations operator-(Operations const &lhs,
		Operations const &rhs);
    
	void add(Operations const &rhs);
	void sub(Operations const &rhs);
    
	public:
		Operations() = default;
		Operations(Addition const &other);
		Operations(Subtraction const &other);
};

#endif
