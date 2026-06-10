//
// Created by munoz on 25/05/2026.
//
/*
Clase Inscripcion

Esta clase representa el tipo de inscripción que tiene un estudiante
dentro de la academia de idiomas.

Relación con otras clases:
- Estudiante contiene un objeto de tipo Inscripcion.
- Esto permite que cada estudiante tenga asociado un plan académico,
  con tipo, costo y duración.

La inscripción se maneja como una clase separada para no guardar esos datos
directamente dentro de Estudiante y mantener mejor organizada la información.
*/
#ifndef UNTITLED4_INSCRIPCION_H
#define UNTITLED4_INSCRIPCION_H
#include <iostream>
#include <string>
using namespace std;

class Inscripcion {
private:
    string tipo;
    float costo;
    int duracionMeses;

public:
    Inscripcion();
    Inscripcion(string tipo, float costo, int duracionMeses);

    string getTipo();
    float getCosto();
    int getDuracionMeses();

    string obtenerDescripcion();
};

Inscripcion::Inscripcion() {
    tipo = "Sin_inscripcion";
    costo = 0;
    duracionMeses = 0;
}

Inscripcion::Inscripcion(string tipo, float costo, int duracionMeses) {
    this->tipo = tipo;
    this->costo = costo;
    this->duracionMeses = duracionMeses;
}

string Inscripcion::getTipo() {
    return tipo;
}

float Inscripcion::getCosto() {
    return costo;
}

int Inscripcion::getDuracionMeses() {
    return duracionMeses;
}

string Inscripcion::obtenerDescripcion() {
    return "Inscripcion: " + tipo +
           "  Costo: " + to_string(costo) +
           "  Duracion: " + to_string(duracionMeses) + " meses";
}
#endif //UNTITLED4_MEMBRESIA_H
