#include "matrix.ih"

istream &operator>>(istream &input, Matrix &rvalue)
{
	double *end = rvalue.d_data + rvalue.d_nRows
		* rvalue.d_nCols;
	for (double *place = rvalue.d_data; place != end;
			++place)
		input >> *place;
	
	return input;
}
