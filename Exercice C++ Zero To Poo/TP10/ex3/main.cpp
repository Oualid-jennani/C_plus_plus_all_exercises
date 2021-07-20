#include <iostream>
#include "String.h"
using namespace std;

int main()
{

    String nom("walid");

    cout<<"la chaine de caractere est : "<<nom.toString()<<endl;

    cout<<"la longueur est : "<<nom.longueur()<<endl;

    nom.add_char(0,'m');

    cout<<"la chaine de caractere est : "<<nom.toString()<<endl;

    if(nom.exist('m'))cout<<"exist\n";
    else cout<<"n'exist pas\n";

    nom.inverser();
    cout<<"l'invers est : "<<nom.toString()<<endl;

    nom.remove_char(2);
    cout<<"la chaine de caractere est : "<<nom.toString()<<endl;


    return 0;
}
