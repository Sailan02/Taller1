#pragma once
#include <iostream>
#include "Usuario.h"
class UsuarioNormal : public Usuario {
public:
    // Constructor para UsuarioNormal
    UsuarioNormal(string ,string,int,string);

    void agregarSoftware(Software* soft){
        Usuario::agregarSoftware(soft);
    }
    void eliminarSoftware(string nombre){
        Usuario::eliminarSoftware(nombre);
    }
    void mostrarSoftware(){
        Usuario::mostrarSoftware();
    }

    // Destructor (opcional)
    ~UsuarioNormal();
};

// Implementación del constructor de UsuarioNormal
UsuarioNormal::UsuarioNormal(string nombre, string password, int edad, string correo)
    : Usuario(nombre, password, edad, correo, false) {

}
    UsuarioNormal::~UsuarioNormal(){}