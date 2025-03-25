//
// Created by juand on 25/03/2025.
//

#include <iostream>
#include <string>
#ifndef CLIENTE_H
#define CLIENTE_H
using namespace std;



class Cliente {
private:

    int id;
    string nombre;


public:

    Cliente(int i, string n);

    int getId();

    string getNombre ();
};



#endif //CLIENTE_H
