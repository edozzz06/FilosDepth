#include "Personaggio.h"
#include "Mossa.h"
#include <iostream>
using namespace std;
Personaggio::Personaggio()
{
    metafisica = 1;
    corporeismo = 1;
    logica = 1;
    metodo = 1;
    teologia = 1;
    politica = 1;
    morale = 1;
    vita = 1;
    for(int i=0;i<4;i++){
        mosse[i] = new Mossa;
    }
}
void Personaggio::stampaDati(){

    cout<<nome<<endl;
    cout<<"Mossa 1: "<<mosse[0]->getNome()<<endl;
    cout<<"Mossa 2: "<<mosse[1]->getNome()<<endl;
    cout<<"Mossa 3: "<<mosse[2]->getNome()<<endl;
    cout<<"Mossa 4: "<<mosse[3]->getNome()<<endl;
    cout<<"Vita: "<<vita<<endl;
    cout<<"Metafisica: "<<metafisica<<endl;
    cout<<"Corporeismo: "<<corporeismo<<endl;
    cout<<"Logica: "<<logica<<endl;
    cout<<"Metodo: "<<metodo<<endl;
    cout<<"Teologia: "<<teologia<<endl;
    cout<<"Politica: "<<politica<<endl;
    cout<<"Morale: "<<morale<<endl;
    cout<<"!!Storia del personaggio!!"<<endl;//TODO SCRIVERE STORIE/DESCRIZIONI PERSONAGGI
}

