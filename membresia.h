//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_MEMBRESIA_H
#define UNTITLED4_MEMBRESIA_H
#include <iostream>
#include <string>
using namespace std;

class Membresia {
private:
    string tipo;
    float costo;
    int duracionDias;

public:
    Membresia();
    Membresia(string tipo, float costo, int duracionDias);

    string getTipo();
    float getCosto();
    int getDuracionDias();

    float calcularCosto();
    string obtenerDescripcion();
};

Membresia::Membresia()
    : tipo("Sin membresia"), costo(0), duracionDias(0) {}

Membresia::Membresia(string tipo, float costo, int duracionDias)
    : tipo(tipo), costo(costo), duracionDias(duracionDias) {}

string Membresia::getTipo() {
    return tipo;
}

float Membresia::getCosto() {
    return costo;
}

int Membresia::getDuracionDias() {
    return duracionDias;
}

float Membresia::calcularCosto() {
    return costo;
}

string Membresia::obtenerDescripcion() {
    return tipo + " | $" + to_string(costo) + " | " + to_string(duracionDias) + " dias";
}
#endif //UNTITLED4_MEMBRESIA_H
