#include "matrixmaker.h"

namespace MatrixMaker
{
	Matrix const *MatrixMaker::CopyMatrix::
		d_blueprint = 0;
	
	Matrix *factory(Matrix const &mat, size_t count)
	{
		MatrixMaker::CopyMatrix::d_blueprint = &mat;
		return new MatrixMaker::CopyMatrix[count];
	}
}
