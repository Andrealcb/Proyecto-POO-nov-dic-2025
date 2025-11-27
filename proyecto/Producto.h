#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

class Producto {
private:
    int id;
    std::string nombre;
    std::string codigo;
    double precio_unitario;
    int cantidad_stock;

public:
    Producto();
    Producto(int id, const std::string& nombre, const std::string& codigo, double precio, int cantidad);

    int getId() const;
    std::string getNombre() const;
    std::string getCodigo() const;
    double getPrecio() const;
    int getCantidad() const;

    void setNombre(const std::string& n);
    void setPrecio(double p);
    void setCantidad(int c);

    void mostrar() const;
};

#endif 
