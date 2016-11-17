#include "subtraction.ih"
#include "../operations/operations.h"

Subtraction &Subtraction::operator-=(Operations const &rhs)
{
	Operations copy(*this);
	copy.sub(rhs);
	return *this;
}
