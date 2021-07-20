#include <iostream>
#include "point.h"
#include "table.h"
#include "table_col.h"

using namespace std;

int main()
{
    //-------(1)
    cout<<"\n\n\n--------------------------------------------- class point ------------------------------------------------\n";

    cout<<"\n------------------(constructeur)--------------------\n";
    point p1,p2(2,3),p3;
    cout<<p1;
    cout<<p2;

    cout<<"------------------(operateur >> and <<)--------------------\n";
    cin>>p1;
    cout<<p1;

    cout<<"------------------(operateur ==)--------------------\n";
    cout<<(p1==p2)<<endl;

    cout<<"------------------(operateur +)--------------------\n";
    p3 = p1 + p2;
    cout<<p3;

    cout<<"------------------(function and function AMIE)--------------------\n";
    cout<<p2*2;
    cout<<2*p2;

    cout<<"------------------(constructeur par recopie)--------------------\n";
    point p4(p3);
    cout<<p4;


    //-------(2)

    cout<<"\n\n\n--------------------------------------------- class table ------------------------------------------------\n";

    table T1(2),T2(3),T3;
    cout<<"\n------------------(Table 1)--------------------\n";
    T1.saisie();
    T1.affiche();
    cout<<"\n------------------(table 2)--------------------\n";
    T2.saisie();
    T2.affiche();
    cout<<"------------------(operateur =)--------------------\n";
    T3 = T1;
    T3.affiche();

    cout<<"------------------(operateur ==)--------------------\n";
    cout<<(T1 == T2)<<endl;

    cout<<"------------------(operateur +)--------------------\n";
    T3 = T1+T2;
    T3.affiche();

    cout<<"------------------(constructeur par recopie)--------------------\n";
    table T4(T3);
    T4.affiche();


    //-------(3)
    cout<<"\n\n\n--------------------------------------------- class_col ------------------------------------------------\n";

    table_col Tc1(2,"red"),Tc2(3,"red");
    cout<<"\n------------------(Table_col saisie)--------------------\n";
    Tc1.saisie();
    Tc1.affiche();

    cout<<"------------------(operateur =)--------------------\n";

    Tc2 = Tc1;
    Tc2.affiche();

    cout<<"------------------(constructeur par recopie)--------------------\n";
    table_col Tc3(Tc2);
    Tc3.affiche();






    return 0;
}
