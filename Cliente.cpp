//
// Created by juand on 25/03/2025.
//

#include "Cliente.h"

Cliente::Cliente(string n, int id): nombre(n), id(id) {}

int Cliente::getId() {return id;}

string Cliente::getNombre() {return nombre;}
