#include <iostream>
#include "circulo.h"
#include "rectangulo.h"

using namespace std;



// Definición de la función amiga (externa)
void compararAreas(const Rectangulo& r, const Circulo& c) {
    double areaRect = r.ancho * r.alto;         // acceso permitido
    double areaCirc = M_PI * pow(c.radio, 2);   // acceso permitido

    cout << "Área del rectángulo: " << areaRect << endl;
    cout << "Área del círculo: " << areaCirc << endl;

    if (areaRect > areaCirc)
        cout << "El rectángulo tiene mayor área." << endl;
    else
        cout << "El círculo tiene mayor área." << endl;
}
