#include "main.ih"

int main(int argc, char **argv)
{
	Matrix mat({{0, 1, 2, 3,}, {4, 5, 6, 7}});
	
	size_t count = 8;
	Matrix *matArray = factory(mat, count);
	
	for (size_t index = 0; index != count; ++index)
	{
		cout << matArray[index]
			<< '\n';
	}
	
	delete[] matArray;
}
