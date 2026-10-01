#ifndef RECTANGULO_H
#define RECTANGULO_H

using namespace std;

class Rectangulo {
private:
    double ancho, alto;
public:
    Rectangulo(double a, double h) : ancho(a), alto(h) {}
    friend void compararAreas(const Rectangulo& r, const Circulo& c);
};


#endif // RECTANGULO_H
