#include "Usuario.h"

Usuario::Usuario() : id(-1), usuario(""), contrasena(""), rol(Rol::EMPLEADO) {}

Usuario::Usuario(int id, const std::string& usuario, const std::string& contrasena, Rol rol)
    : id(id), usuario(usuario), contrasena(contrasena), rol(rol) {}

int Usuario::getId() const { return id; }
std::string Usuario::getUsuario() const { return usuario; }
std::string Usuario::getContrasena() const { return contrasena; }
Rol Usuario::getRol() const { return rol; }

void Usuario::setUsuario(const std::string& u) { usuario = u; }
void Usuario::setContrasena(const std::string& p) { contrasena = p; }
