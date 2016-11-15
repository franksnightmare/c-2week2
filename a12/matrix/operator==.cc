#include "matrix.ih"

bool operator==(Matrix const &left,
	Matrix const &right)
{
	if (left.d_nRows != right.d_nRows
			|| left.d_nCols != right.d_nCols)
		return false;
	
	size_t end = left.d_nRows * left.d_nCols;
	for (size_t index = 0; index != end;
			++index)
		if (left.d_data[index] != right.d_data[index])
			return false;
	
	return true;
}
