#include "addition.ih"
#include "../operations/operations.h"

Addition &Addition::operator+=(Operations const &rhs)
{
	cout << "compound addition\n";
	Operations copy(*this);
	copy.add(rhs);
	return *this;
}
