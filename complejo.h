#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <iostream>


class Complejo
{

    public:

    float re;
    float im;

    Complejo();
    void setRe(float re);
    void setIm(float im);

    float getRe();
    float getIm();

    void suma(Complejo a, Complejo b);
    void resta(Complejo a, Complejo b);
    void multiplicacion(Complejo a, Complejo b);
    void conjugado(Complejo a);

};


#endif // COMPLEJO_H
