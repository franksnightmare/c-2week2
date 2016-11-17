#include "matrix.ih"

Proxy Matrix::operator()(Mode mode, size_t start,
	size_t parts)
{
	return Proxy(d_nRows, d_nCols, d_data,
		start, parts, mode);
}
