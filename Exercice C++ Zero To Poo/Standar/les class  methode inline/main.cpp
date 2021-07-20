#include <iostream>
#include "point.h"


using namespace std;
int main()
{
    point A ,*B;
    B=new point;
    A.saisie();
    A.affiche ();
    A.translate (3 ,2);
    A.affiche () ;
    B->saisie();
    B->affiche ();
    B->translate (1.2 ,1.5);
    B->affiche () ;

    point::afficheNbr();

    delete B;

    return 0;
}
