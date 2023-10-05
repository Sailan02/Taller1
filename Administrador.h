#pragma once
#include <iostream>
#include "Usuario.h"


class Administrador : public Usuario {
public:
    // Constructor
    Administrador(string , string , int , string );

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
      ~Administrador();
};

// Implementación del constructor de Administrador
Administrador::Administrador(string nombre, string password, int edad, string correo)
    : Usuario(nombre, password, edad, correo, true) {
  
}