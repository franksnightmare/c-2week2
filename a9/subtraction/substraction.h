#ifndef SUBSTRACTION_H
#define SUBSTRACTION_H

class Operations;

class Substraction
{
    public:
        Substraction();
        ~Substraction();
        Substraction &operator+=(Operations const &rhs);
};

#endif
