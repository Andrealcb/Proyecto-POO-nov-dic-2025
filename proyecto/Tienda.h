#ifndef TIENDA_H
#define TIENDA_H

#include <vector>
#include <string>
#include "Producto.h"
#include "Usuario.h"
#include "Venta.h"
#include "Carrito.h"

class Tienda {
private:
    // tablas
    std::vector<Producto> productos;
    std::vector<Usuario> empleados;
    std::vector<Usuario> gerentes;
    std::vector<Usuario> administradores;
    std::vector<Venta> ventas_registradas;
    std::vector<std::vector<std::string>> reporte_ventas;

    // ids automaticos
    int nextProductoId;
    int nextUsuarioId;
    int nextVentaId;

    // helpers
    std::string nowString() const;
    std::string readLine(const std::string& prompt = "") const;
    double parseDouble(const std::string& s) const;
    int parseInt(const std::string& s) const;

    int indexProductoPorCodigo(const std::string& codigo) const;
    bool codigoExiste(const std::string& codigo) const;
    bool usuarioExisteEnColeccion(const std::string& nombre) const;

public:
    Tienda();

    // inicio
    void crearTablas();

    // productos
    void agregarProducto();
    void buscarProductoPorCodigo() const;
    void modificarProducto();
    void eliminarProducto();
    void mostrarProductos() const;

    // usuarios
    void agregarGerente();
    void agregarEmpleado();
    void modificarGerente();
    void modificarEmpleado();
    void eliminarGerente();
    void eliminarEmpleado();
    void mostrarUsuarios() const;
    void mostrarUsuariosCombinados() const;

    // ventas / carrito
    void venderProducto(const std::string& nombre_usuario = "Desconocido", const std::string& rango = "Desconocido");
    void registrarVenta(const std::vector<std::pair<std::vector<std::string>,int>>& productos_a_vender, double total_venta, const std::string& usuario, const std::string& rango);

    // reportes
    void mostrarReporteVentas() const;

    // login
    std::vector<std::string> siAdministrador() const;
    std::vector<std::string> siGerente() const;
    std::vector<std::string> siEmpleado() const;
    void administradorNo();

    // menu principal
    void run();
};

#endif 
