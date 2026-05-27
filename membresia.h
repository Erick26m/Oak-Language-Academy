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
    void setTipo(string tipo);

    float getCosto();
    void setCosto(float costo);

    int getDuracionDias();
    void setDuracionDias(int duracionDias);

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

void Membresia::setTipo(string tipo) {
    this->tipo = tipo;
}

float Membresia::getCosto() {
    return costo;
}

void Membresia::setCosto(float costo) {
    this->costo = costo;
}

int Membresia::getDuracionDias() {
    return duracionDias;
}

void Membresia::setDuracionDias(int duracionDias) {
    this->duracionDias = duracionDias;
}

float Membresia::calcularCosto() {
    return costo;
}

string Membresia::obtenerDescripcion() {
    return tipo + "$" + to_string(costo) + "  " + to_string(duracionDias) + " dias";
}
#endif //UNTITLED4_MEMBRESIA_H
