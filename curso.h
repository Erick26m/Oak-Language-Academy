//
// Created by munoz on 25/05/2026.
//
/*
Clase Curso

Esta clase representa un curso ofrecido por la academia de idiomas.

Relación con otras clases:
- Estudiante tiene un curso asignado.
- Profesor puede asignar cursos a estudiantes.

Lo separe en una clase propia porque un curso tiene información específica,
como nombre, objetivo, duración y nivel.
*/
#ifndef UNTITLED4_CURSO_H
#define UNTITLED4_CURSO_H
#include <iostream>
#include <string>

using namespace std;

class Curso {
private:
    string nombre;
    int duracionHoras;

public:
    Curso();
    Curso(string nombre, int duracionHoras);

    string getNombre();
    int getDuracionHoras();

    string obtenerDescripcion();
};

Curso::Curso() {
    nombre = "Sin_curso";
    duracionHoras = 0;
}

Curso::Curso(string nombre, int duracionHoras) {
    this->nombre = nombre;
    this->duracionHoras = duracionHoras;
}

string Curso::getNombre() {
    return nombre;
}

int Curso::getDuracionHoras() {
    return duracionHoras;
}

string Curso::obtenerDescripcion() {
    return "Curso: " + nombre +
           "  Duracion: " + to_string(duracionHoras) + " horas";
}
#endif //UNTITLED4_RUTINA_H
