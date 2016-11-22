#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstddef>
#include <initializer_list>
#include <iostream>

// Proxy for exercise 69.
enum Mode
{
	BY_ROWS,
	BY_COLUMNS
};

class Matrix;
class MatExtractProxy
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
	
	double *d_data = 0;
	
	size_t d_start = 0;
	size_t d_steps = 0; // 0 means all
	
	Mode d_mode = BY_ROWS;
	
	public:
		MatExtractProxy(size_t nRows, size_t nCols,
			double *d_data, size_t start, size_t steps,
			Mode mode);
		
		std::istream rowExtractor(std::istream &input);
		std::istream columnExtractor(std::istream &input);
		
		friend std::istream &operator>>(
			std::istream &input, MatExtractProxy &&temp);
};

// Matrix class.
class Matrix
{
	size_t d_nRows = 0;
	size_t d_nCols = 0;
	
	double *d_data = 0;
	
	public:
		Matrix() = default;
		Matrix(size_t nRows, size_t nCols);
		Matrix(std::initializer_list<
			std::initializer_list<double>> rows);
		Matrix(Matrix const &other);
		Matrix(Matrix &&other);
		~Matrix();
		Matrix &operator=(Matrix const &other);
		Matrix &operator=(Matrix &&other);
		Matrix &tr();
		
		void swap(Matrix &other);
		
		size_t const &nRows();
		size_t const &nCols();
		
		double *row(size_t index);
		double const *row(size_t index) const;
		
		Matrix transpose();
		static Matrix identity(size_t dim);
		
		// Exercise 67
		double *operator[](size_t rowIdx);
		double const *operator[](size_t rowIdx) const;
		
		// Exercise 68
		friend Matrix operator+(Matrix const &left,
			Matrix const &right);
		Matrix &operator+=(Matrix const &other);
				
		// Exercise 69
		MatExtractProxy operator()(size_t nRows,
			size_t nCols, Mode mode = BY_ROWS);
		MatExtractProxy operator()(Mode mode);
		MatExtractProxy operator()(size_t start);
		MatExtractProxy operator()(Mode mode,
			size_t start, size_t steps = 0);
		
		friend std::istream &operator>>(
			std::istream &input, Matrix &rvalue);
		friend std::ostream &operator<<(
			std::ostream &output, Matrix const &rvalue);
		
		// Exercise 70
		friend bool operator==(Matrix const &left,
			Matrix const &right);
		friend bool operator!=(Matrix const &left,
			Matrix const &right);
	
	private:
};

// Stream operators for exercise 69.
std::istream &operator>>(std::istream &input,
	MatExtractProxy &&temp);
std::istream &operator>>(std::istream &input,
	Matrix &rvalue);
std::ostream &operator<<(std::ostream &output,
	Matrix const &rvalue);

// Exercise 68
Matrix operator+(Matrix const &left,
	Matrix const &right);

// Exercise 70
bool operator==(Matrix const &left,
	Matrix const &right);
bool operator!=(Matrix const &left,
	Matrix const &right);

#endif
