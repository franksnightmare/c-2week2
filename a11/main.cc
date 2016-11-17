#include "main.h"

int main(int argc, char **argv)
{
	Operations op1;
	Operations op2;
	
	op1 += op2;
	op2 -= op1;
	
	Operations op3 = op1 + op2;
	Operations op4 = op2 - op1;
}
