//
// Created by juand on 25/03/2025.
//
#include <iostream>
#include <string>
#include <vector>
#include "Cliente.h"
#include "Habitacion.h"
#ifndef HOTEL_H
#define HOTEL_H
using namespace std;



class Hotel {

private:
    string nombre;
    vector<Habitacion*> habitaciones;
    vector<Cliente*> clientes;


public:
    Hotel(string n);

    ~Hotel();

    void agregarHabitacion (Habitacion* hab);

    void registrarCliente (Cliente* cliente);

    void mostrarHabitacion () const;

    void mostrarClientes () const;
};



#endif //HOTEL_H
