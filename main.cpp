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

        if (comando == "CREAR_HABITACION") {

            cin >> numero >> tipo;
            Habitacion* nuevaHabitacion = new Habitacion (numero, tipo);
            listaHabitaciones.push_back(nuevaHabitacion);

        }

        else if ( comando == "CREAR_CLIENTE") {
            cin >> nombre >> id;
            Cliente* nuevoCliente = new Cliente (id, nombre);
            listaClientes.push_back(nuevoCliente);
        }

        else if (comando == "AGREGAR_HABITACION") {
            cin >> IndxHab;
            hotel.agregarHabitacion(listaHabitaciones[IndxHab]);
        }

        else if (comando == "AGREGAR_CLIENTE") {
            cin >> IndxCli;
            hotel.registrarCliente(listaClientes[IndxCli]);
        }

        else if (comando == "HABITACIONES_HOTEL") {
            hotel.mostrarHabitacion();
        }

        else if (comando == "CLIENTES_HOTEL"){
            hotel.mostrarClientes();
        }

        else if (comando == "MOSTRAR_CLIENTES") {
            mostrarTodosLosClientes();
        }

        else if (comando == "MOSTRAR_HABITACIONES") {
            mostrarTodasLasHabitaciones();
        }

        else if (comando == "DESTRUIR_HOTEL") {
            destruirHotel();
        }

        else if (comando == "SALIR") {
            break;
        }







    }






};











