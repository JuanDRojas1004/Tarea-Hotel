//
// Created by juand on 25/03/2025.
//

#include "Habitacion.h"

Habitacion::Habitacion(int n, string t): numero(n), tipo(t), ocupada(false) {
    cout << "Habitacion creada con numero: " << numero << " " << "de tipo: " << tipo << endl;
}

int Habitacion::getNumero() {return numero;}

string Habitacion::getTipo() {return tipo;}

bool Habitacion::Ocupada() {return ocupada;}

