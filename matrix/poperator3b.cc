#include "matrix.ih"

Proxy Matrix::operator()(Mode mode, size_t start)
{
	return Proxy(d_nRows, d_nCols, d_data,
		start, 0, mode);
}
