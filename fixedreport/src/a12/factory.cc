#include "main.ih"
#include "matrix/matrix.h"

Matrix *factory(Matrix const &mat, size_t count)
{
	Matrix::Maker::setBlueprint(&mat);
	return new Matrix::Maker[count];
	Matrix::Maker::setBlueprint(0);
}
