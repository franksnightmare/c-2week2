#include "matrix.ih"

Matrix operator+(Matrix const &left,
	Matrix const &right)
{
	if (left.d_nRows != right.d_nRows
		|| left.d_nCols != right.d_nCols)
	{
		cerr << "Matrices must have the same size.\n";
		return left;	
	}

	Matrix copy(left);
	size_t end = copy.d_nRows * copy.d_nCols
	for (size_t idx = 0; idx != end; ++idx)
		copy.d_data[idx] += right.d_data[idx];
	return copy;
}
