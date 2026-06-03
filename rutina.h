//
// Created by munoz on 25/05/2026.
//
#ifndef UNTITLED4_CURSO_H
#define UNTITLED4_CURSO_H
#include <iostream>
#include <string>

using namespace std;

class Curso {
private:
    string nombre;
    string objetivo;
    int duracionHoras;
    string nivel;

public:
    Curso();
    Curso(string nombre, string objetivo, int duracionHoras, string nivel);

    string getNombre();
    string getObjetivo();
    int getDuracionHoras();
    string getNivel();

    string obtenerDescripcion();
};

// IMPLEMENTACIONES

Curso::Curso()
    : nombre("Sin curso"), objetivo("Sin objetivo"), duracionHoras(0), nivel("Sin nivel") {}

Curso::Curso(string nombre, string objetivo, int duracionHoras, string nivel)
    : nombre(nombre), objetivo(objetivo), duracionHoras(duracionHoras), nivel(nivel) {}

string Curso::getNombre() {
    return nombre;
}

string Curso::getObjetivo() {
    return objetivo;
}

int Curso::getDuracionHoras() {
    return duracionHoras;
}

string Curso::getNivel() {
    return nivel;
}

string Curso::obtenerDescripcion() {
    return nombre +
           "  Objetivo: " + objetivo +
           "  Duracion: " + to_string(duracionHoras) + " horas" +
           "  Nivel: " + nivel;
}
#endif //UNTITLED4_RUTINA_H
