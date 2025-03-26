#include <iostream>
#include <vector>
#include <string>
#include "Hotel.h"
using namespace std;


vector <Cliente*> listaClientes;
vector<Habitacion*> listaHabitaciones;

void mostrarTodasLasHabitaciones() {
    for (const auto& hab : listaHabitaciones) {
        cout << "Habitacion: " << hab -> getNumero() << " " << "de tipo: " << hab -> getTipo() << " "<< "esta ocupada? "<< " " << (hab -> Ocupada() ? "Si" : "No") << endl;
    }
}

void mostarTodosLosClientes () {
    for (const auto& cli : listaClientes) {
        cout << "Cliente: " << cli -> getNombre() << " "<< "con ID: " << cli -> getId() << endl;
    }
}

Hotel hotel("Hotel las Palmas");

void destruirHotel () {
    cout << "Hotel Destruido" << endl;
    hotel = Hotel("No Hotel");
}

int main() {

    int numero, id, indxHab, indxCli;
    string comando, nombre, tipo;

    while (true) {

        cin >> comando;

        if (comando == "CREAR_CLIENTE") {

            cin >> nombre >> id;
            Cliente* nuevoCliente = new Cliente(nombre, id);
            listaClientes.push_back(nuevoCliente);

        }

        else if (comando == "CREAR_HABITACION") {

            cin >> numero >> tipo;
            Habitacion* nuevaHabitacion = new Habitacion(numero, tipo);
            listaHabitaciones.push_back(nuevaHabitacion);
        }

        else if (comando == "AGREGAR_HABITACION") {

            cin >> indxHab;
            hotel.agregarHabitacion(listaHabitaciones[indxHab]);
        }

        else if (comando == "REGISTRAR_CLIENTE") {
            cin >> indxCli;
            hotel.registrarCliente(listaClientes[indxCli]);
        }


        else if (comando == "HABITACIONES_HOTEL") {
            hotel.mostrarHabitacion();
        }

        else if (comando == "CLIENTES_HOTEL") {
            hotel.mostrarCliente();
        }

        else if (comando == "MOSTRAR_CLIENTES") {
            mostarTodosLosClientes();
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





}



