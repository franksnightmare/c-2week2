#include "matrix.ih"

istream &operator>>(istream &input, Proxy &&pr)
{
	size_t boundary = pr.d_mode == BY_ROWS
		? pr.d_nRows : pr.d_nCols;
	if (pr.d_steps == 0)
		pr.d_steps = boundary;
	
	// Boundary limit for number of rows/columns.
	// Insertion past the bounds is ignored.
	if (pr.d_start >= boundary)
			return input;
	
	if (pr.d_start + pr.d_steps >= boundary)
		pr.d_steps = boundary - pr.d_start;
	
	return pr.d_mode == BY_ROWS
		? pr.columnExtractor(input)
		: pr.rowExtractor(input, pr);
}
