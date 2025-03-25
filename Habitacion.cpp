//
// Created by juand on 25/03/2025.
//

#include "Habitacion.h"

Habitacion::Habitacion(int num, string t): numero (num), tipo (t), ocupada(false) {
    cout << "Habitacion creada: " << numero << tipo << endl;
}

int Habitacion::getNumero() const {return numero;}

string Habitacion::getTipo() const {return tipo;}

bool Habitacion::estaOcupada() const {return ocupada;}

void Habitacion::ocupar() { ocupada = true;}

void Habitacion::desocupar() {ocupada = false;}
