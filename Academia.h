//
// Created by munoz on 08/06/2026.
//
/* Clase Academia 
Esta clase funciona como la clase controladora del sistema.
Su objetivo es administrar el flujo principal del programa. 
Relación con otras clases:
- Contiene un Estudiante. 
- Contiene un Profesor.
- Contiene un Curso.
- Usa Inscripcion al momento de registrar los datos del estudiante. 
- Usa Persona* para aplicar polimorfismo al mostrar la información. 
La clase Academia muestra un menú en consola para que el usuario pueda interactuar con el sistema. 
Desde aquí se registran los datos, se selecciona el tipo de inscripción, se crea el curso y se asigna al estudiante por medio del profesor.
El atributo datosRegistrados permite saber si ya se capturó la información antes de intentar mostrarla.
Gracias a esta clase, el main queda más limpio, ya que solamente crea un objeto Academia y llama al método iniciar().
*/
#ifndef UNTITLED4_ACADEMIA_H
#define UNTITLED4_ACADEMIA_H
#include <iostream>
#include <string>
#include "persona.h"
#include "estudiante.h"
#include "profesor.h"
#include "curso.h"
#include "inscripcion.h"

using namespace std;

class Academia {
private:
    Estudiante estudiante;
    Profesor profesor;
    Curso curso;

    bool datosRegistrados;

public:
    Academia();

    void iniciar();
    void mostrarMenu();
    void registrarDatos();
    void mostrarDatos();
};

Academia::Academia() {
    datosRegistrados = false;
}

void Academia::iniciar() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                registrarDatos();
                break;

            case 2:
                mostrarDatos();
                break;

            case 3:
                cout << "Saliendo del sistema" << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
                break;
        }

        cout << endl;

    } while(opcion != 3);
}

void Academia::mostrarMenu() {
    cout << "OAK LANGUAGE ACADEMY" << endl;
    cout << "1. Registrar datos" << endl;
    cout << "2. Mostrar datos" << endl;
    cout << "3. Salir" << endl;
    cout << "Selecciona una opcion: ";
}

void Academia::registrarDatos() {
    string nombreEstudiante;
    string matriculaEstudiante;

    int edadEstudiante;
    float promedio;

    string tipoInscripcion;
    float costo;
    int duracionMeses;

    string nombreProfesor;
    string matriculaProfesor;
    string idioma;

    int edadProfesor;
    int aniosExperiencia;

    string nombreCurso;
    int duracionHoras;

    cout << "Nombre del estudiante: ";
    cin >> nombreEstudiante;

    cout << "Edad del estudiante: ";
    cin >> edadEstudiante;

    cout << "Matricula del estudiante: ";
    cin >> matriculaEstudiante;

    cout << "Promedio del estudiante: ";
    cin >> promedio;

    int opcionInscripcion;

    cout << "Tipos de inscripcion disponibles:" << endl;
    cout << "1. Regular - $1800 - 4 meses" << endl;
    cout << "2. Intensiva - $2500 - 6 meses" << endl;
    cout << "3. Premium - $3200 - 8 meses" << endl;
    cout << "Selecciona el tipo de inscripcion: ";
    cin >> opcionInscripcion;

    switch(opcionInscripcion) {
        case 1:
            tipoInscripcion = "Regular";
            costo = 1800;
            duracionMeses = 4;
            break;

        case 2:
            tipoInscripcion = "Intensiva";
            costo = 2500;
            duracionMeses = 6;
            break;

        case 3:
            tipoInscripcion = "Premium";
            costo = 3200;
            duracionMeses = 8;
            break;

        default:
            tipoInscripcion = "Regular";
            costo = 1800;
            duracionMeses = 4;
            cout << "Opcion no valida. Se asigno inscripcion Regular." << endl;
            break;
    }

    cout << "Nombre del profesor: ";
    cin >> nombreProfesor;

    cout << "Edad del profesor: ";
    cin >> edadProfesor;

    cout << "Matricula del profesor: ";
    cin >> matriculaProfesor;

    cout << "Idioma que ensena: ";
    cin >> idioma;

    cout << "Anios de experiencia: ";
    cin >> aniosExperiencia;

    cout << "Nombre del curso: ";
    cin >> nombreCurso;

    cout << "Duracion del curso en horas: ";
    cin >> duracionHoras;

    Inscripcion inscripcion(tipoInscripcion, costo, duracionMeses);

    estudiante = Estudiante(
        nombreEstudiante,
        edadEstudiante,
        matriculaEstudiante,
        promedio,
        inscripcion
    );

    profesor = Profesor(
        nombreProfesor,
        edadProfesor,
        matriculaProfesor,
        idioma,
        aniosExperiencia
    );

    curso = Curso(
        nombreCurso,
        duracionHoras
    );

    profesor.asignarCurso(estudiante, curso);

    datosRegistrados = true;

    cout << "Datos registrados correctamente." << endl;
    cout << "El profesor " << profesor.getNombre()
         << " asigno el curso " << curso.getNombre()
         << " al estudiante " << estudiante.getNombre() << "." << endl;
}

void Academia::mostrarDatos() {
    if(datosRegistrados == false) {
        cout << "Primero debes registrar los datos." << endl;
        return;
    }

    cout << "Datos registrados" << endl;

    Persona* persona1 = &estudiante;
    Persona* persona2 = &profesor;

    cout << persona1->obtenerResumen() << endl;
    cout << persona2->obtenerResumen() << endl;

    cout << curso.obtenerDescripcion() << endl;
}
#endif //UNTITLED4_ACADEMIA_H
