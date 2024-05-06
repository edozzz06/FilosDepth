#ifndef PERSONAGGIO_H
#define PERSONAGGIO_H
#include <string>
#include "Mossa.h"
using namespace std;

class Personaggio{
    protected:
    string nome;
    Mossa *mosse[4];
    int metafisica;
    int corporeismo;
    int logica;
    int metodo;
    int teologia;
    int politica;
    int morale;
    int vita;

    public:
    Personaggio();
    void setNome(string n);
    void setMosse(Mossa m[4]);
    void setMetafisica(int var);
    void setCorporeistmo(int var);
    void setLogica(int var);
    void setMetodo(int var);
    void setTeologia(int var);
    void setPolitica(int var);
    void setMorale(int var);
    void setVita(int var);
    string getNome();
    Mossa getMossa1();
    Mossa getMossa2();
    Mossa getMossa3();
    Mossa getMossa4();
    int getMetafisica();
    int getCorporeismo();
    int getLogica();
    int getMetodo();
    int getTeologia();
    int getPolitica();
    int getMorale();
    int getVita();
    void stampaDati();

};

#endif // PERSONAGGIO_H
