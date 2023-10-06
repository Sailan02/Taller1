#pragma once
#include <iostream>
#include "Softwares.h"

class NodoSoftware {
public:
    Software* soft;
    NodoSoftware* siguiente;

    NodoSoftware(Software* u) : soft(u), siguiente(nullptr) {}
    ~NodoSoftware() {
        delete soft;
    }
};