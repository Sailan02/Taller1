#pragma once
#include <iostream>
#include "Softwares.h"

class Ofimatica : public Software {
private:
    int cantidad;

public:
    // Constructor
    Ofimatica(std::string nombre, std::string developer, int clasificacionEdad, double precio, int cantidad)
        : Software(nombre, developer, clasificacionEdad, precio), cantidad(cantidad) {
    }

    // Método para obtener la cantidad de la ofimática
    int getCantidad() const;

    // Método para establecer la cantidad de la ofimática
    void setCantidad(int nuevoCantidad);

    void agregarcantidad(int numero){
        cantidad=cantidad+numero;
    }
    void borrarcantidad(int numero){
        if(numero>cantidad){
        }else{
           cantidad=cantidad-numero;
        }
      

    }
};

// Implementación de getCantidad y setCantidad fuera de la declaración de la clase
inline int Ofimatica::getCantidad() const {
    return cantidad;
}

inline void Ofimatica::setCantidad(int nuevoCantidad) {
    cantidad = nuevoCantidad;
}