//
// Created by juand on 25/03/2025.

#include<iostream>
#include<string>
using namespace std;

#ifndef HABITACION_H

#define HABITACION_H


class Habitacion {

private:
    int numero;
    string tipo;
    bool ocupada;

public:

    Habitacion(int n, string t);

    int getNumero ();

    string getTipo ();

    bool Ocupada();
};
#endif //HABITACION_H
