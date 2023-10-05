#pragma once
#include <iostream>
using namespace std;

class Software {
private:
    string nombre;
    string developer;
    int clasificacionDeEdad;
    double precio;

public:
    Software(string, string, int, double);
    virtual~Software();
    string getNombre();
    string getDeveloper();
    int getClasificacionDeEdad();
    double getPrecio();
   
};

// Cuerpo de los Métodos
Software::Software(string nombre, string developer, int clasificacionDeEdad, double precio)
    : nombre(nombre), developer(developer), clasificacionDeEdad(clasificacionDeEdad), precio(precio) {}

Software::~Software() {}

string Software::getNombre() {
    return nombre;
}

string Software::getDeveloper() {
    return developer;
}

int Software::getClasificacionDeEdad() {
    return clasificacionDeEdad;
}

double Software::getPrecio() {
    return precio;
}
