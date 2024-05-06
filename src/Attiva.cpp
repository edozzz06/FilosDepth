#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
#include "Attiva.h"
#include "Mossa.h"



int Attiva::calcolaDanni(int cch1, int cch2, int cca1, int cca2){

    int danno, deb1, deb2;
    deb1 = -0.03 * (cca1-carbunecessario1);
    deb2 = -0.03 * (cca2-carbunecessario2);
    danno = potenza * ((log10(cch1- carbunecessario1)+1.5)+(log10(cch1- carbunecessario1)+1.5)) + potenza*(deb1+deb2);
    return danno;

}
