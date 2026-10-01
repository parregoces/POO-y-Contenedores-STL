#ifndef FNCAMIGA_H
#define FNCAMIGA_H

#include "rectangulo.h"
#include "circulo.h"

// Declarar la función como amiga
friend void compararAreas(const Rectangulo& r, const Circulo& c);

#endif // FNCAMIGA_H
