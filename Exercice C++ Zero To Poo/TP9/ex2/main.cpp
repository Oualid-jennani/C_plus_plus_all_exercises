#include <iostream>
#include "compte.h"
#include "banque.h"

using namespace std;
int main()
{
    banque b;
    compte c;
    c.initialisation();
    c.retrait(4);
    c.depot(7);
    //c.consultation();

    compte c2;
    c2.initialisation();
    c2.retrait(4);
    c2.depot(2);
    //c2.consultation();



    b.add(c);
    b.add(c2);

    for(int i=0;i<b.nbrC;i++)b.tabC[i].consultation();

    cout << "Hello world!" << endl;
    return 0;
}
