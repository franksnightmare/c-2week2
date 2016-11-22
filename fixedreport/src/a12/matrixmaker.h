#ifndef MATRIXMAKER_H_
#define MATRIXMAKER_H_

#include "matrix/matrix.h"

class Copy: public Matrix
{
	public:
		Copy();
		
		static Matrix const *d_blueprint;
};

Matrix *factory(Matrix const &mat, size_t count);

#endif
