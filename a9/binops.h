#ifndef BINOPS_H
#define BINOPS_H

class Binops: public Addition, public Substraction
{
    friend Addition;
    friend Substraction;
};

#endif
