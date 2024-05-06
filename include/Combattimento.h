#ifndef COMBATTIMENTO_H
#define COMBATTIMENTO_H
#include <string>
#include "Personaggio.h"
using namespace std;

class Combattimento
{
    public:
        Combattimento();
        virtual ~Combattimento();
        void subisciDanni();
    protected:

    private:
        Personaggio combattenti[2];
};

#endif // COMBATTIMENTO_H
