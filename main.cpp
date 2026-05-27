#include "cliente.h"
#include "entrenador.h"
#include <iostream>
using namespace std;

int main() {

    Membresia mem1("Premium",850,30);

    Rutina rutina1("Full Body",
                     "Ganar musculo",
                     60,
                     "Media");

    Cliente cliente1(
        "Armando",
        19,
        101,
        75.5,
        1.75,
        "Ganar musculo",
        mem1
    );

    Entrenador entrenador1(
        "Erick",
        30,
        201,
        "Hipertrofia",
        5
    );

    entrenador1.asignarRutina(cliente1,rutina1);

    // Aqui aplico el polimorfismo:
    // utilizando un arreglo de punteros de la clase Persona.Aunque el arreglo pertenece a la clase madre,
    // se almacenan objetos de clases hijas como Cliente yEntrenador
    // Esto me permite trabajar con distintos tipos de objetos
    // utilizando una sola referencia. Después, mediante el
    // metodo virtual obtenerResumen(), el programa identifica
    // automáticamente el tipo real de cada objeto y ejecuta el metodo correspondiente.
    // Por ejemplo, cuando el objeto almacenado es un Cliente,
    // se ejecuta Cliente::obtenerResumen(), y cuando el objeto
    // es un Entrenador, se ejecuta Entrenador::obtenerResumen().
    Persona* personas[2];

    personas[0] = &cliente1;
    personas[1] = &entrenador1;

    for(int i=0;i<2;i++){

        cout<<personas[i]->obtenerResumen()<<endl;

    }

    return 0;
}
