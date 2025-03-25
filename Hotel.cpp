//
// Created by juand on 25/03/2025.
//

#include "Hotel.h"

Hotel::Hotel(string n ): nombre(n) {
    cout << "Hotel creado: "<< nombre << endl;
}

Hotel::~Hotel() {
    cout << "Hotel destruido: " << nombre << endl;
}

void Hotel::agregarHabitacion(Habitacion *hab) {habitaciones.push_back (hab);}

void Hotel::registrarCliente(Cliente *cliente) {clientes.push_back(cliente);}

void Hotel::mostrarHabitacion() const {
    for (const auto& hab : habitaciones) {
        cout << "Numero: " << hab -> getNumero() << "Tipo: " << hab -> getTipo() << "Ocupada: " <<
                (hab -> estaOcupada() ? "Si" : "No") << endl;

    }


}

void Hotel::mostrarClientes() const {
    for (const auto& cliente : clientes) {
        cout << "Nombre: " << cliente -> getNombre() << "Id: " << cliente -> getId() << endl;
    }

}
