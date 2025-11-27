#ifndef USUARIO_H
#define USUARIO_H

#include <string>

enum class Rol { ADMIN, GERENTE, EMPLEADO };

class Usuario {
private:
    int id;
    std::string usuario;
    std::string contrasena;
    Rol rol;

public:
    Usuario();
    Usuario(int id, const std::string& usuario, const std::string& contrasena, Rol rol);

    int getId() const;
    std::string getUsuario() const;
    std::string getContrasena() const;
    Rol getRol() const;

    void setUsuario(const std::string& u);
    void setContrasena(const std::string& p);
};

#endif 
