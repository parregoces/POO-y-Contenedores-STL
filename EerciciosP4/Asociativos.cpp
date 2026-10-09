#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
#include <unordered_set>

void asociativos() {
    // SET: claves únicas y ordenadas.
    std::set<int> s{30, 10, 20};
    s.insert(20);              // no añade un duplicado
    s.erase(10);
    std::cout << "set: ";
    for (int x : s) std::cout << x << ' ';
    std::cout << '\n';          // 20 30

    // MULTISET: permite claves repetidas y las mantiene ordenadas.
    std::multiset<int> ms{30, 10, 20};
    ms.insert(20);
    ms.erase(ms.find(20));     // elimina SOLO una aparición de 20
    std::cout << "multiset: ";
    for (int x : ms) std::cout << x << ' ';
    std::cout << '\n';          // 10 20 30

    // MAP: claves únicas, ordenadas, asociadas con valores.
    std::map<std::string, int> m{
        {"SensorB", 20}, {"SensorA", 10}
    };
    m["SensorC"] = 30;         // añade una clave nueva
    m["SensorB"] = 25;         // actualiza el valor existente
    m.erase("SensorA");
    std::cout << "map: ";
    for (const auto& [clave, valor] : m)
        std::cout << clave << '=' << valor << ' ';
    std::cout << '\n';          // SensorB=25 SensorC=30

    // MULTIMAP: permite varias parejas con la misma clave.
    std::multimap<std::string, int> mm{
        {"SensorA", 10}, {"SensorA", 11}
    };
    mm.insert({"SensorA", 12});
    mm.erase(mm.find("SensorA")); // elimina SOLO una pareja
    std::cout << "multimap: ";
    for (const auto& [clave, valor] : mm)
        std::cout << clave << '=' << valor << ' ';
    std::cout << '\n';

    // UNORDERED_SET: claves únicas, sin orden de recorrido garantizado.
    std::unordered_set<int> us{30, 10, 20};
    us.insert(20);             // duplicado: no se añade
    us.erase(10);
    std::cout << "unordered_set: ";
    for (int x : us) std::cout << x << ' ';
    std::cout << '\n';

    // UNORDERED_MULTISET: repetidas, sin orden garantizado.
    std::unordered_multiset<int> ums{30, 10, 20};
    ums.insert(20);
    ums.erase(ums.find(20));   // elimina SOLO una aparición
    std::cout << "unordered_multiset: ";
    for (int x : ums) std::cout << x << ' ';
    std::cout << '\n';

    // UNORDERED_MAP: claves únicas con valores, sin orden garantizado.
    std::unordered_map<std::string, int> um{
        {"SensorA", 10}, {"SensorB", 20}
    };
    um["SensorC"] = 30;
    um["SensorB"] = 25;
    um.erase("SensorA");
    std::cout << "unordered_map: ";
    for (const auto& [clave, valor] : um)
        std::cout << clave << '=' << valor << ' ';
    std::cout << '\n';

    // UNORDERED_MULTIMAP: parejas con claves repetidas, sin orden garantizado.
    std::unordered_multimap<std::string, int> umm{
        {"SensorA", 10}, {"SensorA", 11}
    };
    umm.insert({"SensorA", 12});
    umm.erase(umm.find("SensorA")); // elimina SOLO una pareja
    std::cout << "unordered_multimap: ";
    for (const auto& [clave, valor] : umm)
        std::cout << clave << '=' << valor << ' ';
    std::cout << '\n';
}
