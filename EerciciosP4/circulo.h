#ifndef CIRCULO_H
#define CIRCULO_H

#include "rectangulo.h"

class Circulo {
private:
    double radio;
public:
    Circulo(double r) : radio(r) {}

    // Declarar la misma función como amiga
    friend void compararAreas(const Rectangulo& r, const Circulo& c);
};

#endif // CIRCULO_H
