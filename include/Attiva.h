#ifndef ATTIVA_H
#define ATTIVA_H
#include <string>
#include "Mossa.h"
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;


class Attiva: public Mossa{
    private:
        string tipo;
        string carbu[2];
        int carbunecessario1;
        int carbunecessario2;
        int potenza;
    public:
        string getCarbu1str();
        string getCarbu2str();
        int getCarbu1int();
        int getCarbu2int();
        string setCarbu1str();
        string setCarbu2str();
        int setCarbu1int();
        int  setCarbu2int();
        int calcolaDanni(int cch1,int cch2, int cca1, int cca2);


};

#endif // ATTIVA_H
