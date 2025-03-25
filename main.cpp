#include <iostream>
#include <vector>
#include <string>
#include "Hotel.h"
using namespace std;


vector <Cliente*> listaClientes;
vector <Habitacion*> listaHabitaciones;

void mostrarTodasLasHabitaciones() {
    for (const auto& hab : listaHabitaciones) {
        cout << "Habitacion numero: " << hab -> getNumero() <<  ", de tipo: " << hab -> getTipo() <<
            (hab -> estaOcupada() ? "si" : "no") << endl;
    }
}

void mostrarTodosLosClientes () {
    for (const auto& cli : listaClientes) {
        cout << "Nombre: " << cli -> getNombre() << "ID: " << cli -> getId() << endl;
    }
}

Hotel hotel ("Hotel el Paraiso");

void destruirHotel () {
    cout << "Hotel destruido" << endl;
    hotel = Hotel("No Hotel");
}

int main() {

    int numero, id, IndxCli, IndxHab;
    string nombre, comando, tipo;

    while (true) {

        cin >> comando;

        if (comando == "CREAR HABITACION") {

            cin >> numero >> tipo;
            Habitacion* nuevaHabitacion = new Habitacion (numero, tipo);
            listaHabitaciones.push_back(nuevaHabitacion);
            cout << "Habitacion: " << numero << "de tipo: " << tipo << "creada con exito" << endl;

        }

        else if ( comando == "CREAR CLIENTE") {
            cin >> nombre >> id;
            Cliente* nuevoCliente = new Cliente (id, nombre);
            listaClientes.push_back(nuevoCliente);
        }

        else if (comando == "AGREGAR HABITACION") {
            cin >> IndxHab;
            hotel.agregarHabitacion(listaHabitaciones[IndxHab]);
        }

        else if (comando == "AGREGAR CLIENTE") {
            cin >> IndxCli;
            hotel.registrarCliente(listaClientes[IndxCli]);
        }

        else if (comando == "HABITACIONES HOTEL") {
            hotel.mostrarHabitacion();
        }

        else if (comando == "CLIENTES HOTEL"){
            hotel.mostrarClientes();
        }

        else if (comando == "MOSTRAR CLIENTES") {
            mostrarTodosLosClientes();
        }

        else if (comando == "MOSTRAR HABITACIONES") {
            mostrarTodasLasHabitaciones();
        }

        else if (comando == "DESTRUIR HOTEL") {
            destruirHotel();
        }

        else if (comando == "SALIR") {
            break;
        }







    }






};











