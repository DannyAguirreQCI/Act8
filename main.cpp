#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
   Computadora c02 = Computadora(  "Windows",
                                "16GB",
                                "Lenovo",
                                "1TB");
    Computadora c03;
    c03.setSistemaOperativo("Linux");
    c03.setMemoriaRAM("8GB");
    c03.setNombreEquipo("HP");
    c03.setMemoriaROM("500GB");

    Laboratorio lb;

    //lb.agregarComponente(c02);
    //lb.agregarComponente(c03);
    lb << c02<<c03;

    Computadora c04;
    cin>>c04;
    lb<<c04;


    lb.mostrar();

    //cout<<c02;
    //cout<<c03;
}
