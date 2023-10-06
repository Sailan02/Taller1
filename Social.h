#pragma once
#include <iostream>
#include "Softwares.h"
#include "Usuario.h"
#include "vector"

class Social : public Software {
private:
    int cantidad;


public:
    // Constructor
    Social(std::string nombre, std::string developer, int clasificacionEdad, double precio, int cantidad)
        : Software(nombre, developer, clasificacionEdad, precio), cantidad(cantidad) {
    }

    // Método para obtener la cantidad de la ofimática
    int getCantidad() const;

    // Método para establecer la cantidad de la ofimática
    void setCantidad(int nuevoCantidad);
};

// Implementación de getCantidad y setCantidad fuera de la declaración de la clase
inline int Social::getCantidad() const {
    return cantidad;
}

inline void Social::setCantidad(int nuevoCantidad) {
    cantidad = nuevoCantidad;
}