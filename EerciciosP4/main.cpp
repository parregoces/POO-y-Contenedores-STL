#include <iostream>

class MiClase {
public:
    MiClase(int valor) {
        // Constructor de la clase MiClase
        this->valor = valor; // Uso de 'this' para asignar a la variable de miembro
    }

private:
    int valor;
};

int main() {
    MiClase obj(42); // Llama al constructor con un valor

    //obj.mostrarValor(10); // Llama a la función mostrarValor con un valor

    return 0;
}
