#include <iostream>
#include "funciones.h"

using namespace std;

int main() {
    unsigned int x;

    while(true){

        cout<<"Ingrese el valor de x: "<<endl;
        cin >>x;

        switch(x){
        case 1:
            secuenciales();
            break;
        case 2:
            asociativos();
            break;
        case 3:
            adaptativos();
            break;
        default:
            break;
        }
    }
}
