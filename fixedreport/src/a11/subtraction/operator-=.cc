#include "subtraction.ih"
#include "../operations/operations.h"

Subtraction &Subtraction::operator-=(
	Operations const &rhs)
{
	cout << "compound subtraction\n";
	Operations copy(*this);
	copy.sub(rhs);
	return *this;
}
