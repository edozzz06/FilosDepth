#ifndef MOSSA_H
#define MOSSA_H
#include <string>
using namespace std;

class Mossa{
    protected:
        string nome;
        string tipo;
        string carbu[2];
        int carbu1;
        int carbu2;
    public:
        Mossa();
        ~Mossa();
        string getCarbu1str();
        string getCarbu2str();
        int getCarbu1int();
        int getCarbu2int();
        string getNome();
        void setCarbu1str();
        void setCarbu2str();
        void setCarbu1int();
        void  setCarbu2int();
        string setNome();

};
#endif // MOSSA_H
