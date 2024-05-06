#include <iostream>
using namespace std;
#include <vector>
#include "Personaggio.h"
#include "Player.h"
#include "Filosofo.h"
#include "Mossa.h"
#include "Attiva.h"
#include "Combattimento.h"
#include "Player.h"
#include "Multigiocatore.h"
#include "GiocatoreSingolo.h"
#include <fstream>

        const int ROWS = 3;
        const int COLS = 3;

void giocatoreSingolo(){

    GiocatoreSingolo gs;

}

void Multigiocatore(){


}


int main(){



    int scelta;
    int controllo;
    cout<<"Benvenuto in Filo's Depts"<<endl;
    system("pause");
    do{
    cout<<"Scegli la modalita' che vuoi giocare"<<endl;
    cout<<"1) Giocatore singolo"<<endl;
    cout<<"2) Multigiocatore"<<endl;
    cout<<"Inserisci un numero (1-2)"<<endl;
    cin>>scelta;
    switch (scelta)
    {
    case 1:
        giocatoreSingolo();
        controllo = 0;
        break;
    case 2:
        Multigiocatore();
        controllo = 0;
        break;
    default:
        cout<<"numero sbagliato, inseriscine un altro"<<endl;
        controllo = 1;
        break;
    }
    }while (controllo == 1);



    system("pause");
    return 0;
}
