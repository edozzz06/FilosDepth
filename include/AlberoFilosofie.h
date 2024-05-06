#ifndef ALBEROFILOSOFIE_H
#define ALBEROFILOSOFIE_H
#include <string>
#include <vector>
#include "Mossa.h"
#include "Attiva.h"

using namespace std;



class AlberoFilosofie{
    private:

        vector<vector<string>> matrix;
        int linea;
        int colonna;
    public:


        AlberoFilosofie() : matrix(4, vector<string>(5)), linea(0), colonna(0){inizializza();};
        void inizializza();
        void stampa();
        void imparaMosse(string m);
};

#endif // ALBEROFILOSOFIE_H
