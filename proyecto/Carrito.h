#ifndef CARRITO_H
#define CARRITO_H

#include <vector>
#include <string>

struct ItemCarrito {
    std::vector<std::string> productoRow; 
    int cantidad;
};

class Carrito {
private:
    std::vector<ItemCarrito> items;

public:
    void agregar(const std::vector<std::string>& productoRow, int cantidad);
    bool estaVacio() const;
    void limpiar();
    double total() const;
    const std::vector<ItemCarrito>& getItems() const;
};

#endif 
