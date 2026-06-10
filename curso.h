//
// Created by munoz on 25/05/2026.
//
/* Clase Curso
Esta clase representa el curso que será asignado al estudiante.
El curso almacena la información principal: nombre del curso y duración en horas.
Relación con otras clases:
- Estudiante tiene un Curso asignado.
- Profesor usa Curso para asignarlo a un estudiante. 
- Academia contiene un Curso para administrar el flujo del programa. 
La clase Curso permite organizar la información del curso de forma separada.
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
