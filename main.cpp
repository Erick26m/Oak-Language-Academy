#include "cliente.h"
#include "entrenador.h"

int main(){

    Membresia mem1("Premium",850,30);

    Rutina r1("Full Body",
              "Ganar musculo",
              60,
              "Media");

    Cliente c1("Armando",
               19,
               1,
               75,
               1.75,
               "Musculo",
               mem1);

    Entrenador e1("Erick",
                  28,
                  2,
                  "Hipertrofia",
                  5);

    e1.asignarRutina(c1,r1);

    c1.mostrarDatos();

    cout<<endl;

    e1.mostrarDatos();

    return 0;
}
