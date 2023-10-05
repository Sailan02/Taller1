#pragma once
#include <iostream>
#include "Softwares.h"

class Produccion : public Software {
private:
    std::string tipo;

public:
    // Constructor
    Produccion(std::string nombre, std::string developer, int clasificacionEdad, double precio, std::string tipo)
        : Software(nombre, developer, clasificacionEdad, precio), tipo(tipo) {
    }

    // Método para obtener el género del juego
    std::string gettipo() const;

    // Método para establecer el género del juego
    void settipo(std::string nuevotipo);

    // Método para agregar usuario al juego directamente
};

// Implementación de gettipo y settipo fuera de la declaración de la clase
inline std::string Produccion::gettipo() const {
    return tipo;
}

inline void Produccion::settipo(std::string nuevotipo) {
    tipo = nuevotipo;
}