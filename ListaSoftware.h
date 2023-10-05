#pragma once
#include <iostream>
#include "NodoSoftware.h"
#include "Social.h"

class ListaSoftwares {
public:
    ListaSoftwares();
    ~ListaSoftwares();
    void agregarSoftware(Software* soft);
    void mostrarSoftwares();
    void eliminarSoftware(string nombre);
    bool estavacia();
    bool tieneSoftSocial();

private:
    NodoSoftware* primerSoftware;
};

ListaSoftwares::ListaSoftwares() : primerSoftware(nullptr) {}

ListaSoftwares::~ListaSoftwares() {
    NodoSoftware* actual = primerSoftware;
    while (actual != nullptr) {
        NodoSoftware* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

void ListaSoftwares::agregarSoftware(Software* soft) {
    if (soft == nullptr) {
        // Manejar el caso de Software nulo, si es necesario
        return;
    }

    NodoSoftware* nuevoNodo = new NodoSoftware(soft);
    nuevoNodo->siguiente = primerSoftware;
    primerSoftware = nuevoNodo;
}

void ListaSoftwares::mostrarSoftwares() {
    std::cout << "Lista de Softwares:" << std::endl;
    NodoSoftware* actual = primerSoftware;
    while (actual != nullptr) {
        std::cout << actual->soft->getNombre() << std::endl;
        actual = actual->siguiente;
    }
}
void ListaSoftwares::eliminarSoftware(string nombre) {
    NodoSoftware* actual = primerSoftware;
    NodoSoftware* anterior = nullptr;

    while (actual != nullptr && actual->soft->getNombre() != nombre) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) {
        // No se encontró el software con el nombre dado
        return;
    }

    // El software se encuentra en actual
    if (anterior == nullptr) {
        // El software a eliminar es el primer software en la lista
        primerSoftware = actual->siguiente;
    } else {
        anterior->siguiente = actual->siguiente;
    }

    // Eliminar el nodo y liberar memoria
    delete actual;
}
bool ListaSoftwares::estavacia(){
     NodoSoftware* cabeza = primerSoftware;
        if (cabeza == nullptr) {
            return true;  // Lista está vacía
        } else {
            return false; // Lista no está vacía
        }
    }
bool ListaSoftwares::tieneSoftSocial(){
     NodoSoftware* cabeza = primerSoftware;
     while(cabeza!=nullptr){
        if(dynamic_cast<Social*>(cabeza->soft) != nullptr){
            return false;
        }
        cabeza=cabeza->siguiente;
     }
     return true;
    
    }
