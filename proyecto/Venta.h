#ifndef VENTA_H
#define VENTA_H

#include <string>

struct Venta {
    int id;
    std::string producto;
    int cantidad;
    double precio_unitario;
    double total;
    std::string vendedor;
    std::string rango;
    std::string fecha_hora; // "YHH:MM:SS"
};

#endif 
