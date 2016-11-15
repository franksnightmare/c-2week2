#include "main.ih"
#include "copymatrix.h"

Matrix CopyMatrix::d_blueprint;

Matrix *factory(Matrix const &mat, size_t count)
{
	CopyMatrix::d_blueprint = mat;
	return new CopyMatrix[count];
}
