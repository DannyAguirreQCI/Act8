#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont=0;
}

void Laboratorio::agregarComponente(const Computadora &c)
{
        if (cont < 5) {
        arreglo[cont] = c;
        cont++;
    }
    else {
        cout << "Ya se lleno el arreglo" << endl;
    }
}

void Laboratorio::mostrar()
{
    cout << left;
    cout<< setw(10)<< "O.S.";
    cout<< setw(10)<< "RAM";
    cout<< setw(10)<< "MARCA";
    cout<< setw(10)<< "ROM";
    cout<<endl;
    for (size_t i = 0; i < cont; i++) {
        Computadora &c = arreglo[i];

        cout<< c;
        /*cout << "Sistema Operativo: " << p.getSistemaOperativo() << endl;
        cout << "Memoria RAM: " << p.getMemoriaRAM() << endl;
        cout << "Nombre del equipo: " << p.getNombreEquipo() << endl;
        cout << "Memoria ROM: " << p.getMemoriaROM() << endl;
        cout << endl;*/
    }
}
