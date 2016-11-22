#ifndef SUBTRACTION_H
#define SUBTRACTION_H

class Operations;

class Subtraction
{
	public:
		Subtraction &operator-=(
			Operations const &rhs);
};

Operations operator-(Operations const &lhs,
	Operations const &rhs);

#endif
