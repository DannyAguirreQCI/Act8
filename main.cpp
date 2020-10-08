#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
   Computadora p02 = Computadora(  "Windows",
                                "16GB",
                                "Lenovo",
                                "1TB");
    Computadora p03;
    p03.setSistemaOperativo("Linux");
    p03.setMemoriaRAM("8GB");
    p03.setNombreEquipo("HP");
    p03.setMemoriaROM("500GB");

    Laboratorio lb;

    lb.agregarComponente(p02);
    lb.agregarComponente(p03);

    lb.mostrar();
}
