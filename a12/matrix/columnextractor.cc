#include "matrix.ih"

istream &MatExtractProxy::rowExtractor(istream &input)
{
	// Column-wise needs a column step and a row step.
	double *colStart = d_data + d_start;
	double *colEnd = colStart + d_steps;
	for (double *col = colStart; col != colEnd; ++col)
	{
		for (size_t row = 0; row != d_nRows; ++row)
		{
			double *place = col + row * d_nCols;
			input >> *place;
		}
	}
	return input;
}
