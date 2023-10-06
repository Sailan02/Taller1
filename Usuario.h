#pragma once
#include <iostream>
#include "ListaSoftware.h"
#include "vector"
using namespace std;

class Usuario {
private:
    string nombre;
    string password;
    int edad;
    string correo;
    bool acceder_log;
    ListaSoftwares listasoft;
    vector<Usuario*> listadeamigos;
public:
    Usuario(string, string, int, string, bool);
    ~Usuario();
    string getNombre();
    string getPassword();
    int getEdad();
    string getCorreo();
    bool getAcceder_log();
    ListaSoftwares getListaSoftwares();
    void agregaramigos(Usuario* user);
    string mostraramigos();
    void eliminaramigo(Usuario* user);
    int devolvercantidadamigos();
    bool buscarnombre(string nombre);
    virtual void agregarSoftware(Software* soft);
    virtual void mostrarSoftware();
    virtual void eliminarSoftware(string nombre);
};

// Cuerpo de los Métodos
Usuario::Usuario(string nombre, string password, int edad, string correo, bool acceder_log)
    : nombre(nombre), password(password), edad(edad), correo(correo), acceder_log(acceder_log) {}

Usuario::~Usuario() {}

string Usuario::getNombre() {
    return nombre;
}

int Usuario::getEdad() {
    return edad;
}

string Usuario::getCorreo() {
    return correo;
}

string Usuario::getPassword() {
    return password;
}
ListaSoftwares Usuario::getListaSoftwares() {
        return listasoft;
}

bool Usuario::getAcceder_log() {
    return acceder_log;
}
void Usuario::agregarSoftware(Software* soft){
    listasoft.agregarSoftware(soft);
}
void Usuario::mostrarSoftware(){
    listasoft.mostrarSoftwares();
}
void Usuario::eliminarSoftware(string nombre){
    listasoft.eliminarSoftware(nombre);
}
void Usuario::agregaramigos(Usuario* user){
    listadeamigos.push_back(user);
}
void Usuario::eliminaramigo(Usuario* user) {
    for (auto it = listadeamigos.begin(); it != listadeamigos.end(); ++it) {
        if (*it == user) {
            listadeamigos.erase(it);
            return; 
        }
    }
}
string Usuario::mostraramigos(){
     string print="";
    for(int i=0;i<listadeamigos.size();i++){
        print+=listadeamigos[i]->getNombre()+" // ";
    }
    return print;
    
}
int Usuario::devolvercantidadamigos(){
    return listadeamigos.size();
}

bool Usuario::buscarnombre(string nombre){
    for(int i=0;i<listadeamigos.size();i++){
        if(listadeamigos[i]->getNombre()==nombre)
            return true;
    }
    return false;
}



