#include "Pile.h"
#include <iostream>

using namespace std;

Pile::Pile(int t)
{
    //ctor
    dim = t;
    adr = new int [dim];
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

void Pile::empile(int x)
{
    if(pleine() == true){cout<<"Imposible : pile plaine\n";}
    else{adr[taille] = x; taille++;}
}

void Pile::depile()
{
    if(vide() == true){cout<<"Imposible : pile vide\n";}
    else{taille--;}
}



void Pile::PileAffiche()const
{
    int i;

    for(i=0 ; i< taille ; i++){cout<<adr[i]<<"\t";}

    cout<<endl;
}







