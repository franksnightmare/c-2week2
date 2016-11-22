#include "matrixmaker.h"

Matrix const *Copy::d_blueprint = 0;

Matrix *factory(Matrix const &mat, size_t count)
{
	Copy::d_blueprint = &mat;
	return new Copy[count];
}
