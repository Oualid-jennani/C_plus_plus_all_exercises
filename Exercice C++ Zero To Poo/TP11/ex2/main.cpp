#include "chainep.h"
#include "chainep.h"
#include <iostream>
using namespace std;
int main()
    {
    Chainep a("je suis la");
    cout<<a.taille()<<endl;
    a.affiche();
    a.ajout('c',10);
    cout<<a.taille()<<endl;
    a.affiche();
    a.supp(10);
    cout<<a.taille()<<endl;
    a.affiche();
    a.inv().affiche();
    if(a.appart('p')==true) cout<<"existe"<<endl;
    else cout<<"n'existe pas"<<endl;
    Chainep b=a;
    b=a.inv();
    if(a==b) cout<<"egalite"<<endl;
    else cout<<" non egalite"<<endl;
    Chainep c;
    c=a+b;
    cout<< c.taille()<<endl;
    c.affiche();
    cout<<c[5]<<endl;
    cout<<a<<b<<c;
    Chainep d;
    cout<<"entrer la chaine d"<<endl;
    cin>>d;
    cout<<d;
    return 0;
}
