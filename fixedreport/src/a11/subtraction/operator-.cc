#include "../operations/operations.h"
#include <iostream>

using namespace std;

Operations operator-(Operations const &lhs,
	Operations const &rhs)
{
	cout << "binary subtraction\n";
	Operations copy(lhs);
	copy.sub(rhs);
	return copy;
}
