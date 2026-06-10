/*
main
Su responsabilidad es mantener el inicio del sistema lo más simple posible.
En lugar de crear todos los objetos directamente en el main, se crea un objeto de tipo Academia. 
La clase Academia se encarga de mostrar el menú, registrar los datos, asignar el curso y mostrar la información.
Con esta estructura, el código queda más organizado.
*/
using namespace std;
#include "academia.h"

int main() {
    Academia academia;
    academia.iniciar();

    return 0;
}
