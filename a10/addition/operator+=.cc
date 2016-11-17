#include "addition.ih"
#include "../operations/operations.h"

Addition &Addition::operator+=(Operations const &rhs)
{
	Operations copy(*this);
	copy.add(rhs);
	//swap(copy);
	return *this;
}
