#include "matrix.ih"

double *Matrix::operator[](size_t rowIdx)
{
    return row(rowIdx);
}
