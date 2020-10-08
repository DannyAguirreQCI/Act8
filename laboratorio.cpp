#include "laboratorio.h"

Laboratorio::Laboratorio()
{
    cont=0;
}

void Laboratorio::agregarComponente(const Computadora &p)
{
        if (cont < 5) {
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Ya se lleno el arreglo" << endl;
    }
}

void Laboratorio::mostrar()
{
    for (size_t i = 0; i < cont; i++) {
        Computadora &p = arreglo[i];
        cout << "Sistema Operativo: " << p.getSistemaOperativo() << endl;
        cout << "Memoria RAM: " << p.getMemoriaRAM() << endl;
        cout << "Nombre del equipo: " << p.getNombreEquipo() << endl;
        cout << "Memoria ROM: " << p.getMemoriaROM() << endl;
        cout << endl;
    }
}