#include "GiocatoreSingolo.h"
#include <windows.h>
#include <vector>


GiocatoreSingolo::GiocatoreSingolo()
{
            gioca();
            p = new Player;
            f = new Filosofo;

}
void GiocatoreSingolo::gioca(){
            dialogo(1);
            system("pause");
            a.imparaMosse("arche");
            a.imparaMosse("idea di Dio");
             system("pause");
            a.stampa();

}
void GiocatoreSingolo::dialogo(int n){
            cout<<"\n\tTrua: Caro studente del mio cuore tu sei l'unico tra i miei allievi che e' in grado di \n\tcompiere questa importantissima missione. Nella mia amata Liguria c'è una leggenda \n\tche parla di una sfera di pura energia nascosta nelle profondita' dei monti. Questa sfera \n\tha la capacita' di farti tornare indietro nel tempo e io ho bisogno di te per questa \n\tericolosa missione che salvera' tutta la filosofia. Fortunatamente durante i miei anni di \n\tstudi sono riuscita a trovare la sfera, ma per qualche strano motivo non posso usarla. Ho \n\tdeciso che sarai tu ad usarla per tornare al tempo degli antichi filosofi e recuperare un \n\tmanufatto chiamato ''CRISTALLO DEI PITAGORICI''. Una volta che l'avrai trovato dovrai \n\tcaricarlo di energia filosofica che ti sara' donata dai vari pensatori che incontrerai nel tuo \n\tpercorso. Quando sara' carico torna da me utilizzando il potere della sfera e aiutami a \n\tsalvare la filosofia.\n\tPrendo la sfera e improvvisamente da questa si sprigiona una luce abbagliante che mi \n\tacceca e mi fa cadere a terra. Quanto ricomincio a vedere qualcosa noto di essere \n\tseduto ai margini di un sentiero."<<endl;

}
