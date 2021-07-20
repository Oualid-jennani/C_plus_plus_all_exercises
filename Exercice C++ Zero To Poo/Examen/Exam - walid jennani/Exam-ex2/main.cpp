#include <iostream>
#include "Produit.h"
#include "Multimedia.h"

using namespace std;

int main()
{
    //-------(1)
    cout<<"\n\n\n--------------------------------------------- class Produit ------------------------------------------------\n";

    cout<<"\n------------------(constructeur)--------------------\n";

    Produit p1(11111,"stylo",55.5),p2;
    p1.affiche();
    p2.affiche();

    cout<<"\n------------------(operateur =)--------------------\n";
    p2 = p1;
    p2.affiche();

    cout<<"\n------------------(constructeur par recopie)--------------------\n";
    Produit p3(p1);
    p3.affiche();

    cout<<"\n------------------(prix TTC)--------------------\n";
    p1.PrixTTC();


    //-------(2)
    cout<<"\n\n\n--------------------------------------------- class Multimedia ------------------------------------------------\n";

    cout<<"\n------------------(constructeur)--------------------\n";
    Multimedia m1(11111,"stylo",55.5,"2 ans"),m2;
    m1.affiche();
    m2.affiche();

    cout<<"\n------------------(operateur =)--------------------\n";
    m2 = m1;
    m2.affiche();

    cout<<"\n------------------(constructeur par recopie)--------------------\n";
    Multimedia m3(m1);
    m3.affiche();

    cout<<"\n------------------(prix TTC)--------------------\n";
    m1.PrixTTC();

    return 0;
}
