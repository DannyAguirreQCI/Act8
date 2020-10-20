#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open())
    {
        archivo << left;
        archivo<< setw(10)<< "O.S.";
        archivo<< setw(10)<< "RAM";
        archivo<< setw(10)<< "MARCA";
        archivo<< setw(10)<< "ROM";
        archivo<<endl;
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo<< c;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if (archivo.is_open())
    {
        for (size_t i = 0; i < cont; i++)
        {
            Computadora &c = arreglo[i];
            archivo<< c.getSistemaOperativo()<<endl;
            archivo<< c.getMemoriaRAM()<<endl;
            archivo<< c.getNombreEquipo()<<endl;
            archivo<< c.getMemoriaROM()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open())
    {
        string temp;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);//Sistema Operativo
            if (archivo.eof())
            {
                break;
            }
            c.setSistemaOperativo(temp);

            getline(archivo, temp);//Memoria RAM
            c.setMemoriaRAM(temp);
            /*memoriaram = stof(temp); string-to-float
            c.setMemoriaRAM(memoriaram); stoi for string-to-int*/

            getline(archivo, temp);//Marca
            c.setNombreEquipo(temp);

            getline(archivo, temp);//Memoria ROM
            c.setMemoriaROM(temp);

            agregarComponente(c);
        }
    }
    archivo.close();
}
