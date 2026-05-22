//
// Created by munoz on 21/05/2026.
//

#ifndef UNTITLED4_GIMNASIO_H
#define UNTITLED4_GIMNASIO_H
#include <iostream>
#include <string>
using namespace std;

class Membresia {
private:
    string tipo;
    float costo;
    int duracionDias;

public:
    Membresia() : tipo("Sin membresia"), costo(0), duracionDias(0) {}//Constructor por default

    Membresia(string tip, float cos, int duracion)
        : tipo(tip), costo(cos), duracionDias(duracion) {}

    float calcularCosto() {
        return costo;
    }

    void mostrarMembresia() {
        cout << "Tipo: " << tipo << endl;
        cout << "Costo: $" << costo << endl;
        cout << "Duracion: " << duracionDias << " dias" << endl;
    }
};

class Rutina {
private:
    string nombre;
    string objetivo;
    int duracionMin;
    string dificultad;

public:
    Rutina() : nombre("Sin rutina"), objetivo("Sin objetivo"), duracionMin(0), dificultad("Sin dificultad") {}

    Rutina(string nom, string obj, int duracion, string dif)
        : nombre(nom), objetivo(obj), duracionMin(duracion), dificultad(dif) {}

    void mostrarRutina() {
        cout << "Rutina: " << nombre << endl;
        cout << "Objetivo: " << objetivo << endl;
        cout << "Duracion: " << duracionMin << " minutos" << endl;
        cout << "Dificultad: " << dificultad << endl;
    }
};
#endif //UNTITLED4_GIMNASIO_H
