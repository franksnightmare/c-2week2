#include "matrix.ih"

double const *Matrix::operator[](size_t rowIdx) const
{
    return row(rowIdx);
}
