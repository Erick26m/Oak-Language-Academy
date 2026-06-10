//
// Created by munoz on 25/05/2026.
//
/* Clase Inscripcion
Esta clase representa la inscripción del estudiante dentro de la academia.
Su objetivo es guardar la información del plan de inscripción seleccionado. 
Relación con otras clases:
- Estudiante tiene una Inscripcion como atributo.
La clase almacena el tipo de inscripción, el costo y la duración en meses. 
Estos datos permiten representar el plan académico que tiene el estudiante dentro del sistema.
En la clase Academia se muestran opciones de inscripción al usuario.
Después de elegir una opción, se crea un objeto Inscripcion con los datos correspondientes. 
El método obtenerDescripcion() sirve para regresar la información de la inscripción en forma de texto.
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
