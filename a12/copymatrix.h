#ifndef COPYMATRIX_H_
#define COPYMATRIX_H_

#include "matrix/matrix.h"

class CopyMatrix: public Matrix
{
	public:
		static Matrix d_blueprint;
		
		CopyMatrix();
};

#endif
