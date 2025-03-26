//
// Created by juand on 25/03/2025.
//
#include <vector>
#include <iostream>
#include <string>
#include "Cliente.h"
#include "Habitacion.h"
#ifndef HOTEL_H
#define HOTEL_H

using namespace std;

class Hotel {

private:

    string nombre;
    vector<Habitacion*> habitaciones;
    vector <Cliente*> clientes;

public:

    Hotel (string n);

    ~Hotel();

    void agregarHabitacion (Habitacion* hab);

    void registrarCliente (Cliente* cli);

    void mostrarHabitacion () const;

    void mostrarCliente() const;
};





#endif //HOTEL_H
