#include "Producto.h"
#include <iostream>
#include <iomanip>

Producto::Producto() : id(-1), nombre(""), codigo(""), precio_unitario(0.0), cantidad_stock(0) {}

Producto::Producto(int id, const std::string& nombre, const std::string& codigo, double precio, int cantidad)
    : id(id), nombre(nombre), codigo(codigo), precio_unitario(precio), cantidad_stock(cantidad) {}

int Producto::getId() const { return id; }
std::string Producto::getNombre() const { return nombre; }
std::string Producto::getCodigo() const { return codigo; }
double Producto::getPrecio() const { return precio_unitario; }
int Producto::getCantidad() const { return cantidad_stock; }

void Producto::setNombre(const std::string& n) { nombre = n; }
void Producto::setPrecio(double p) { if (p >= 0) precio_unitario = p; }
void Producto::setCantidad(int c) { if (c >= 0) cantidad_stock = c; }

void Producto::mostrar() const {
    std::cout << "Nombre: " << nombre
              << " | Codigo: " << codigo
              << " | Precio: $" << std::fixed << std::setprecision(2) << precio_unitario
              << " | Stock: " << cantidad_stock
              << std::endl;
}
