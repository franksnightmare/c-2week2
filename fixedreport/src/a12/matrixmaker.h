#ifndef MATRIXMAKER_H_
#define MATRIXMAKER_H_

#include "matrix/matrix.h"

namespace MatrixMaker
{
	class CopyMatrix: public Matrix
	{
		public:
			CopyMatrix();
			
			static Matrix const *d_blueprint;
	};
	
	Matrix *factory(Matrix const &mat, size_t count);
}

#endif
