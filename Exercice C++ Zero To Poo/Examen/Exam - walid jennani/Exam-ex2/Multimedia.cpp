#include "Multimedia.h"
#include<iostream>
using namespace std;

Multimedia::Multimedia():Produit()
{
    //ctor
    DureeGarantie = new char;
    DureeGarantie = "";
}

Multimedia::Multimedia(int ref1,char *nom1,float pht1,char *DureeGarantie1):Produit(ref1,nom1,pht1)
{
    //ctor
    DureeGarantie = new char;
    DureeGarantie = DureeGarantie1;

}


Multimedia::~Multimedia()
{
    //dtor
    delete []DureeGarantie;
}


Multimedia::Multimedia(const Multimedia &obj):Produit(obj)
{
    //ctor
    DureeGarantie = new char;
    DureeGarantie = obj.DureeGarantie;
}


void Multimedia::affiche(){
    Produit::affiche();
    cout<<" | Duree de garantie :"<<DureeGarantie;
}



Multimedia& Multimedia::operator=(const Produit &obj)
{
    Produit::operator=(obj);
    return *this;
}


Multimedia& Multimedia::operator=(const Multimedia &obj)
{
    Produit::ref = obj.ref;
    Produit::nom = obj.nom;
    Produit::pht = obj.pht;

    DureeGarantie=new char;
    DureeGarantie = obj.DureeGarantie;
    return *this;
}






