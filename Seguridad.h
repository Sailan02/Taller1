#pragma once
#include <iostream>
#include "Softwares.h"

class Seguridad : public Software {
private:
    std::string malware;

public:
    // Constructor
    Seguridad(std::string nombre, std::string developer, int clasificacionEdad, double precio, std::string malware)
        : Software(nombre, developer, clasificacionEdad, precio), malware(malware) {
    }

    // Método para obtener el género del juego
    std::string getmalware() const;

    // Método para establecer el género del juego
    void setmalware(std::string nuevomalware);

    // Método para agregar usuario al juego directamente
};

// Implementación de getmalware y setmalware fuera de la declaración de la clase
inline std::string Seguridad::getmalware() const {
    return malware;
}

inline void Seguridad::setmalware(std::string nuevomalware) {
    malware = nuevomalware;
}