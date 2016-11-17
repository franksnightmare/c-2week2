#ifndef ADDITION_H
#define ADDITION_H

class Operations;

class Addition
{
    public:
        Addition();
        ~Addition();
        Addition &operator+=(Operations const &rhs);
};

#endif
