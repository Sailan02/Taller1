#pragma once
#include <iostream>
#include "Usuario.h"
class Joven : public Usuario {
public:
  
    Joven(string ,string,int);
   
   
    void agregarSoftware(Software* soft){
        Usuario::agregarSoftware(soft);
    }
     void eliminarSoftware(string nombre){
        Usuario::eliminarSoftware(nombre);
    }
     void mostrarSoftware(){
        Usuario::mostrarSoftware();
    }
    
    ~Joven();
};

// Implementación del constructor de UsuarioNormal
Joven::Joven(string nombre, string password, int edad)
    : Usuario(nombre, password, edad, "", false) {

}