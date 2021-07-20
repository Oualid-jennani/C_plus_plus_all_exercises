#include "Produit.h"
#include<iostream>
using namespace std;

Produit::Produit()
{
    //ctor
    ref = 0;
    nom = new char;
    nom = "new produit";
    pht = 0;
}

Produit::Produit(int ref1,char *nom1,float pht1)
{
    //ctor
    ref = ref1;
    nom = new char;
    nom = nom1;
    pht = pht1;
}

Produit::~Produit()
{
    //dtor
    delete []nom;
}

Produit::Produit(const Produit &obj)
{
    //ctor
    ref = obj.ref;
    nom = new char;
    nom = obj.nom;
    pht = obj.pht;
}



Produit& Produit::operator=(const Produit &obj)
{
    ref = obj.ref;
    nom = new char;
    nom = obj.nom;
    pht = obj.pht;

    return *this;
}



void Produit::affiche(){
    cout<<"\n--------------affichage--------------\n";
    cout<<"-- Reference : "<<ref<<" | Nom : "<<nom<<" | PHT : "<<pht;
}


void Produit::PrixTTC(){
    cout<<"Le prix TTC est : "<<ref<<(pht+(pht*0.196))<<endl;
}

