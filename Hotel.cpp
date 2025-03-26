//
// Created by juand on 25/03/2025.
//

#include "Hotel.h"

Hotel::Hotel(string n): nombre(n) {cout << "Hotel: " << nombre << " " << "creado" << endl; }

Hotel::~Hotel() {cout << "Hotel destruido" << endl;}

void Hotel::agregarHabitacion(Habitacion *hab) {habitaciones.push_back(hab);}

void Hotel::registrarCliente(Cliente *cli) {clientes.push_back(cli);}

void Hotel::mostrarHabitacion() const {
    for (const auto& hab : habitaciones) {
        cout << "Habitacion: " << hab -> getNumero() << " " << "de tipo: " << hab -> getTipo() << " " << "Esta ocupada: " << (hab -> Ocupada() ? "Si" : "No") << endl;
    }
}

void Hotel::mostrarCliente() const {
    for (const auto& cli : clientes) {
        cout << "Cliente: " << cli -> getNombre() << " " << " ID: " << cli -> getId()<< endl;
    }
}
