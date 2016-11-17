#include "matrix.ih"

istream &MatExtractProxy::rowExtractor(istream &input)
{
	// Row-wise can directly loop through
	// all required entries. 
	double *begin = d_data + d_start * d_nCols;
	double *end = begin + d_steps * d_nCols;
	for (double *place = begin; place != end; ++place)
		input >> *place;
	
	return input;
}
