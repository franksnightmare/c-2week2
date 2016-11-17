#include "matrix.ih"

Proxy Matrix::operator()(size_t nRows,
	size_t nCols, Mode mode)
{
	delete[] d_data;
	
	d_nRows = nRows;
	d_nCols = nCols;
	d_data = new double[nRows * nCols];
	
	return Proxy(nRows, nCols, d_data, 0,
		mode == BY_ROWS ? nRows : nCols, mode);
}
