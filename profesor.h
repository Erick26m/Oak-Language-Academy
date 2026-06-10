//
// Created by munoz on 25/05/2026.
//
/* Clase Profesor 
Esta clase representa al profesor dentro de la academia. 
Hereda de la clase Persona, por lo que comparte datos generales como nombre, edad y matrícula. 
Relación con otras clases: 
- Hereda de Persona.
- Se relaciona con Estudiante porque puede asignarle un curso. 
- Se relaciona con Curso porque utiliza objetos de tipo Curso para hacer la asignación.
La clase contiene información propia del profesor, como el idioma que enseña y sus años de experiencia. 
El método asignarCurso() permite que el profesor asigne un curso a un estudiante. 
Además, se usa sobrecarga porque existen distintas formas de asignar un curso. 
También implementa obtenerResumen(), lo que permite aplicar polimorfismo al mostrar la información del profesor desde un apuntador de tipo Persona. 
*/
#ifndef UNTITLED4_PROFESOR_H
#define UNTITLED4_PROFESOR_H
#include "persona.h"
#include "estudiante.h"
#include "curso.h"
#include <iostream>
#include <string>
using namespace std;

class Profesor : public Persona {
private:
    string idioma;
    int aniosExperiencia;

public:
    Profesor();
    Profesor(string nombre, int edad, string matricula,
             string idioma, int aniosExperiencia);

    ~Profesor();

    string getIdioma();
    void setIdioma(string idioma);

    int getAniosExperiencia();

    void asignarCurso(Estudiante &estudiante, Curso curso);
    void asignarCurso(Estudiante &estudiante, string nombreCurso, int duracionHoras);

    string obtenerResumen();
};

Profesor::Profesor() : Persona() {
    idioma = "Sin_idioma";
    aniosExperiencia = 0;
}

Profesor::Profesor(string nombre, int edad, string matricula,
                   string idioma, int aniosExperiencia)
    : Persona(nombre, edad, matricula) {
    this->idioma = idioma;
    this->aniosExperiencia = aniosExperiencia;
}

Profesor::~Profesor() {
}

string Profesor::getIdioma() {
    return idioma;
}

void Profesor::setIdioma(string idioma) {
    this->idioma = idioma;
}

int Profesor::getAniosExperiencia() {
    return aniosExperiencia;
}

void Profesor::asignarCurso(Estudiante &estudiante, Curso curso) {
    estudiante.asignarCurso(curso);
}

void Profesor::asignarCurso(Estudiante &estudiante, string nombreCurso, int duracionHoras) {
    estudiante.asignarCurso(nombreCurso, duracionHoras);
}

string Profesor::obtenerResumen() {
    return "Profesor: " + nombre +
           "  Edad: " + to_string(edad) +
           "  Matricula: " + matricula +
           "  Idioma: " + idioma +
           "  Experiencia: " + to_string(aniosExperiencia) + " anios";
}
#endif // UNTITLED4_PROFESOR_H
