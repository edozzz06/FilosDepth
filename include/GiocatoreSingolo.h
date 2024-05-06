#ifndef GIOCATORESINGOLO_H
#define GIOCATORESINGOLO_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include "Mossa.h"
#include "Personaggio.h"
#include "Filosofo.h"
#include "AlberoFilosofie.h"
#include "Player.h"


using namespace std;

class GiocatoreSingolo
{
    public:
        GiocatoreSingolo();
        void gioca();
        void dialogo(int n);

    protected:
        Personaggio *p;
        Personaggio *f;
        AlberoFilosofie a;

    private:
};

#endif // GIOCATORESINGOLO_H
