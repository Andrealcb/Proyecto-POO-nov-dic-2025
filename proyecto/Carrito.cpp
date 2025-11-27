#include "Carrito.h"

void Carrito::agregar(const std::vector<std::string>& productoRow, int cantidad) {
    // Si ya hay el mismo codigo en el carrito se sumar cantidad
    for (auto &it : items) {
        if (!it.productoRow.empty() && !productoRow.empty() && it.productoRow[2] == productoRow[2]) {
            it.cantidad += cantidad;
            return;
        }
    }
    ItemCarrito nuevo;
    nuevo.productoRow = productoRow;
    nuevo.cantidad = cantidad;
    items.push_back(nuevo);
}

bool Carrito::estaVacio() const {
    return items.empty();
}

void Carrito::limpiar() {
    items.clear();
}

double Carrito::total() const {
    double suma = 0.0;
    for (const auto &it : items) {
        double precio = 0.0;
        if (it.productoRow.size() >= 4) {
            try { precio = std::stod(it.productoRow[3]); } catch(...) { precio = 0.0; }
        }
        suma += precio * it.cantidad;
    }
    return suma;
}

const std::vector<ItemCarrito>& Carrito::getItems() const {
    return items;
}
