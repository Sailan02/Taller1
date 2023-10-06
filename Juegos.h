#pragma once
#include <iostream>
#include "Softwares.h"

class Juegos : public Software {
private:
    std::string genero;
 

public:
    // Constructor
    Juegos(std::string nombre, std::string developer, int clasificacionEdad, double precio, std::string genero)
        : Software(nombre, developer, clasificacionEdad, precio), genero(genero) {
    }

    // Método para obtener el género del juego
    std::string getGenero() const;
  

    // Método para establecer el género del juego
    void setGenero(std::string nuevoGenero);
  


};

// Implementación de getGenero y setGenero fuera de la declaración de la clase
inline std::string Juegos::getGenero() const {
    return genero;
}

inline void Juegos::setGenero(std::string nuevoGenero) {
    genero = nuevoGenero;
}