//
// Created by juand on 25/03/2025.
//

#include "Cliente.h"

Cliente::Cliente(int i, string n): id(i), nombre(n) {
    cout << "Cliente creado: " << nombre << id << endl;
}

int Cliente::getId() {return id; }

string Cliente::getNombre() {return nombre;}
