#include "matrix.ih"

Proxy Matrix::operator()(Mode mode)
{
	return Proxy(d_nRows, d_nCols, d_data, 0,
		mode == BY_ROWS ? d_nRows : d_nCols,
		mode);
}
