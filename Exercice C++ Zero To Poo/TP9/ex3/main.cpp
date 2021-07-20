#include "Pile.h"
#include <iostream>

using namespace std;

int main()
{
    Pile p = Pile(5);

    p.empile(5);
    p.empile(8);
    p.empile(6);
    p.empile(5);
    p.empile(9);
    p.PileAffiche();

    p.depile();
    p.PileAffiche();

    cout<<"\nla taille de pile est :"<<p.donnetaille()<<endl<<endl;

    p.PileAffiche();

    p.empile(5);

    p.PileAffiche();

    p.empile(9);

    return 0;
}
