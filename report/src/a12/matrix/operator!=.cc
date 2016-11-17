#include "matrix.ih"

bool operator!=(Matrix const &left,
	Matrix const &right)
{
	return !(left == right);
}
