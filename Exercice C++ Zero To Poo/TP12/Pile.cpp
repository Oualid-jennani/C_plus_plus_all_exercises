#include "Pile.h"
#include "vecteur3d.h"
#include <iostream>

using namespace std;

Pile::Pile(int t)
{
    //ctor
    dim = t;
    adr = new vecteur3d [dim];
    taille = 0;
}

Pile::~Pile()
{
    //dtor
    delete []adr;
}

bool Pile::pleine()const
{
    if(taille == dim)return true;
    return false;
}

bool Pile::vide()const
{
    if(taille == 0)return true;

    return false;
}

int Pile::donnetaille()const
{
    return taille;
}

void Pile::empile(vecteur3d v)
{
    if(pleine() == true){cout<<"Imposible : pile plaine\n";}
    else{adr[taille] = v; taille++;}
}

void Pile::depile()
{
    if(vide() == true){cout<<"Imposible : pile vide\n";}
    else{taille--;}
}



void Pile::PileAffiche()const
{
    int i;

    for(i=0 ; i< taille ; i++){adr[i].Affiche();}
    cout<<endl;
}


/*------------------------------------------------------*/
Pile::Pile(const Pile &p)
{
    //ctor cpy
    dim = p.dim;
    adr = new vecteur3d [dim];
    adr = p.adr;
    taille = p.taille;
    cout<<"new pile copie\n";
}
/*------------------------------------------------------*/


/*------------------------------------------------------*/
Pile& Pile::operator=(const Pile &obj) {

    int i;
    dim=obj.dim;
    taille=obj.taille;
    delete [] adr;
    adr=new vecteur3d[dim];
    for(i=0;i<obj.taille;i++)
    adr[i]=obj.adr[i];
    cout<<"surcharge de ="<<endl;
    return *this;
}
/*------------------------------------------------------*/




