#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
using namespace std;

class Computadora
{
public:
    Computadora();
    Computadora(const string &sistemaoperativo,
                const string &memoriaram,
                const string &nombreequipo,
                const string &memoriarom);

    void setSistemaOperativo(const string &valor);
    string getSistemaOperativo() const;

    void setMemoriaRAM(const string &valor);
    string getMemoriaRAM() const;

    void setNombreEquipo(const string &valor);
    string getNombreEquipo() const;

    void setMemoriaROM(const string &valor);
    string getMemoriaROM() const;

private:
    string sistemaoperativo;
    string memoriaram;
    string nombreequipo;
    string memoriarom;

};

#endif
