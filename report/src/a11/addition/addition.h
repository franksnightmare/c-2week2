#ifndef ADDITION_H
#define ADDITION_H

class Operations;

class Addition
{
    public:
        Addition &operator+=(Operations const &rhs);
};

Operations operator+(Operations const &lhs, Operations const &rhs);

#endif
