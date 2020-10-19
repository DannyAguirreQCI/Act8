#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio
{
    Computadora arreglo[5];
    size_t cont;

public:
    Laboratorio();
    void agregarComponente(const Computadora &c);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &l, const Computadora &c)
    {
        l.agregarComponente(c);

        return l;
    }
};

#endif
