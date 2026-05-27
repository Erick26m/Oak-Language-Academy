//
// Created by munoz on 25/05/2026.
//
#ifndef UNTITLED4_RUTINA_H
#define UNTITLED4_RUTINA_H
#include <iostream>
#include <string>
using namespace std;
class Rutina {
private:
    string nombre;
    string objetivo;
    int duracionMin;
    string dificultad;

public:
    Rutina();
    Rutina(string nombre, string objetivo, int duracionMin, string dificultad);

    string getNombre();
    string getObjetivo();
    int getDuracionMin();
    string getDificultad();

    string obtenerDescripcion();
};

Rutina::Rutina()
    : nombre("Sin rutina"), objetivo("Sin objetivo"), duracionMin(0), dificultad("Sin dificultad") {}

Rutina::Rutina(string nombre, string objetivo, int duracionMin, string dificultad)
    : nombre(nombre), objetivo(objetivo), duracionMin(duracionMin), dificultad(dificultad) {}

string Rutina::getNombre() {
    return nombre;
}

string Rutina::getObjetivo() {
    return objetivo;
}

int Rutina::getDuracionMin() {
    return duracionMin;
}

string Rutina::getDificultad() {
    return dificultad;
}

string Rutina::obtenerDescripcion() {
    return nombre + "  Objetivo: " + objetivo + "  " + to_string(duracionMin) + " min  " + dificultad;
}
#endif //UNTITLED4_RUTINA_H
