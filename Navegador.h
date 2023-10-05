#pragma once
#include <iostream>
#include "Softwares.h"

class Navegador : public Software {
private:
    std::string pagina;

public:
    // Constructor
    Navegador(std::string nombre, std::string developer, int clasificacionEdad, double precio, std::string pagina)
        : Software(nombre, developer, clasificacionEdad, precio), pagina(pagina) {
    }

    // Método para obtener el género del juego
    std::string getpagina() const;

    // Método para establecer el género del juego
    void setpagina(std::string nuevopagina);

    // Método para agregar usuario al juego directamente
};
// Implementación de getpagina y setpagina fuera de la declaración de la clase
inline std::string Navegador::getpagina() const {
    return pagina;
}

inline void Navegador::setpagina(std::string nuevopagina) {
    pagina = nuevopagina;
}