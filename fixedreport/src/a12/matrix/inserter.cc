#include "matrix.ih"

ostream &operator<<(ostream &output,
	Matrix const &rvalue)
{
	for (size_t rowNum = 0; rowNum != rvalue.d_nRows;
		++rowNum)
	{
		double const *end = rvalue.row(rowNum)
			+ rvalue.d_nCols;
		for (double const *place = rvalue.row(rowNum);
				place != end; ++place)
			output << *place << ' ';
		output << '\n';
	}
	return output;
}
