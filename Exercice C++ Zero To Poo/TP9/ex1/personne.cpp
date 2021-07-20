#include <iostream>
#include <string.h>
#include "personne.h"

using namespace std;
personne::personne()
{
    //ctor
    nom = new char[20];
    strcpy(nom ,"walid");
    prenom = new char[20];
    strcpy(prenom ,"walid");
    age = 20;
    cout<<"constructeur pad defaut"<<endl;
}


personne::~personne()
{
    //dtor
    delete[]nom;
    delete[]prenom;
    cout<<"destructeur";
}

personne::personne(char*nomP,char*prenomP,int ageP){
    nom = new char[20];
    strcpy(nom ,nomP);
    prenom = new char[20];
    strcpy(prenom ,prenomP);
    age = ageP;
}

void personne::afichier()const{
    cout<<"le nom est : "<<nom<<" ----- le prenom est : "<<prenom<<" ----- l'age est  : "<<age<<endl;
}
