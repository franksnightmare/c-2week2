#ifndef SUBTRACTION_H
#define SUBTRACTION_H

class Operations;

class Subtraction
{
    public:
        Subtraction &operator-=(Operations const &rhs);
};

#endif
