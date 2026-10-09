#include <iostream>
#include <queue>
#include <stack>

void adaptativos() {
    // STACK: último en entrar, primero en salir (LIFO).
    std::stack<int> pila;
    pila.push(10);
    pila.push(20);
    pila.push(30);

    std::cout << "stack, orden de salida: ";
    while (!pila.empty()) {
        std::cout << pila.top() << ' ';
        pila.pop();
    }
    std::cout << '\n';          // 30 20 10

    // QUEUE: primero en entrar, primero en salir (FIFO).
    std::queue<int> cola;
    cola.push(10);
    cola.push(20);
    cola.push(30);

    std::cout << "queue, orden de salida: ";
    while (!cola.empty()) {
        std::cout << cola.front() << ' ';
        cola.pop();
    }
    std::cout << '\n';          // 10 20 30

    // PRIORITY_QUEUE: por defecto, sale primero el valor mayor.
    std::priority_queue<int> prioridad;
    prioridad.push(10);
    prioridad.push(30);
    prioridad.push(20);

    std::cout << "priority_queue, orden de salida: ";
    while (!prioridad.empty()) {
        std::cout << prioridad.top() << ' ';
        prioridad.pop();
    }
    std::cout << '\n';          // 30 20 10
}
