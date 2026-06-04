/*

En el main se prueban las clases principales.
Primero se crean objetos de tipo Inscripcion, Curso, Estudiante y Profesor.
Después, el profesor asigna cursos a los estudiantes.

También se demuestra el uso de polimorfismo usando apuntadores de tipo Persona*.
Con el método virtual obtenerResumen(), el programa ejecuta la versión
correcta dependiendo del tipo real del objeto.

Al final se libera la memoria con delete porque los objetos fueron creados
dinámicamente con new.
*/
#include "estudiante.h"
#include "profesor.h"
#include <iostream>
#include "inscripcion.h"
#include "curso.h"

using namespace std;

int main() {
    Inscripcion inscripcion1(
        "Intensiva",
        2500,
        6
    );

    Inscripcion inscripcion2(
        "Regular",
        1800,
        4
    );

    Curso curso1(
        "Ingles Intermedio",
        "Mejorar conversacion",
        80,
        "B1"
    );

    Curso curso2(
        "Frances Basico",
        "Aprender fundamentos",
        60,
        "A1"
    );

    Curso curso3(
        "Ingles Avanzado",
        "Preparacion TOEFL",
        100,
        "B2"
    );

    Estudiante* estudiante1 = new Estudiante(
        "Armando",
        19,
        "LH001",
        95,
        "B1",
        "Certificacion TOEFL",
        inscripcion1
    );

    Estudiante* estudiante2 = new Estudiante(
        "Luis",
        20,
        "LH002",
        88,
        "A1",
        "Aprender frances desde cero",
        inscripcion2
    );

    Estudiante* estudiante3 = new Estudiante(
        "David",
        21,
        "LH003",
        92,
        "B2",
        "Intercambio academico",
        inscripcion1
    );

    Profesor* profesor1 = new Profesor(
        "Erick",
        30,
        "P001",
        "Ingles",
        5
    );

    profesor1->asignarCurso(*estudiante1, curso1);
    profesor1->asignarCurso(*estudiante2, curso2);

    // Sobrecarga de metodo:
    // Aqui se asigna un curso usando solo nombre y objetivo,
    // no un objeto Curso completo.
    profesor1->asignarCurso(
        *estudiante3,
        "Curso de conversacion avanzada",
        "Mejorar fluidez oral"
    );

    // Aplicacion de polimorfismo:
    // Se crea un arreglo de apuntadores de tipo Persona.
    // Aunque Persona es la clase madre abstracta, el arreglo guarda
    // objetos de clases hijas: Estudiante y Profesor.
    // Gracias al metodo virtual puro obtenerResumen(),
    // se ejecuta la version correspondiente segun el tipo real del objeto.

    Persona* personas[4];

    personas[0] = estudiante1;
    personas[1] = estudiante2;
    personas[2] = estudiante3;
    personas[3] = profesor1;

    cout << "Oak-Language-Academy" << endl;
    cout << endl;

    for(int i = 0; i < 4; i++) {
        cout << personas[i]->obtenerResumen() << endl;
    }

    // Liberacion de memoria:
    // Como se usaron apuntadores con new, se eliminan con delete.
    // El destructor virtual en Persona permite destruir correctamente
    // los objetos de las clases hijas.

    for(int i = 0; i < 4; i++) {
        delete personas[i];
    }

    return 0;
}
