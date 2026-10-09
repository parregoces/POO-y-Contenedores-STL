#include <array>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <vector>

void secuenciales() {
    // ARRAY: tamaño fijo. Podemos reemplazar valores, pero no añadir posiciones.
    std::array<int, 3> a{10, 20, 30};
    a[1] = 25;
    std::cout << "array: ";
    for (int x : a) std::cout << x << ' ';
    std::cout << "(tamano fijo: " << a.size() << ")\n";

    // VECTOR: crece al final; permite acceso por índice.
    std::vector<int> v{10, 20, 30};
    v.push_back(40);           // 10 20 30 40
    v.erase(v.begin() + 1);    // elimina 20
    std::cout << "vector: ";
    for (int x : v) std::cout << x << ' ';
    std::cout << "(v[1] = " << v[1] << ")\n";

    // DEQUE: crece y se reduce en ambos extremos; permite acceso por índice.
    std::deque<int> d{10, 20, 30};
    d.push_front(5);
    d.push_back(40);           // 5 10 20 30 40
    d.pop_front();             // elimina 5
    d.pop_back();              // elimina 40
    std::cout << "deque: ";
    for (int x : d) std::cout << x << ' ';
    std::cout << "(d[1] = " << d[1] << ")\n";

    // LIST: lista doblemente enlazada. No existe l[1].
    std::list<int> l{10, 20, 30};
    auto pos = l.begin();
    //list<int>::iterator pos = l.begin()
    ++pos;                     // apunta a 20
    l.insert(pos, 15);         // 10 15 20 30
    l.erase(pos);              // elimina 20
    std::cout << "list: ";
    for (int x : l) std::cout << x << ' ';
    std::cout << '\n';

    // FORWARD_LIST: lista simplemente enlazada. Se trabaja "después de".
    std::forward_list<int> f{10, 20, 30};
    auto primero = f.begin();  // apunta a 10
    //forward_list<int>::iterator primero = f.begin();
    f.insert_after(primero, 15); // 10 15 20 30
    f.erase_after(primero);      // elimina 15
    std::cout << "forward_list: ";
    for (int x : f) std::cout << x << ' ';
    std::cout << '\n';
}
