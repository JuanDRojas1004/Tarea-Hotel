//
// Created by juand on 25/03/2025.

#include <iostream>
#include <string>
#include <vector>
#ifndef HABITACION_H
#define HABITACION_H
using namespace std;



class Habitacion {
private:

    int numero;
    string tipo;
    bool ocupada;


public:

    Habitacion(int num, string t);

    int getNumero() const;

    string getTipo () const;

    bool estaOcupada () const;

    void ocupar ();

    void desocupar ();


};



#endif //HABITACION_H
