#include "../operations/operations.h"
#include <iostream>

using namespace std;

Operations operator+(Operations const &lhs, Operations const &rhs)
{
	cout << "binary addition\n";
	Operations copy(lhs);
	copy.add(rhs);
	return copy;
}
