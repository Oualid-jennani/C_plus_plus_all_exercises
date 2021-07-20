#include <iostream>
#include "compte.h"


compte::compte()
{
    //ctor
}

compte::~compte()
{
    //dtor
}

using namespace std;

void compte::initialisation()
{
	cout<<"Entre le Numero "<<endl;
	cin>>numero;
	cout<<"Entre le Nom "<<endl;
	cin>>nom;
	cout<<"Entre Le Solde "<<endl;
	cin>>solde;
}

void compte::consultation()
{
    cout<<"\n\nle Numero : est "<<numero<<" le Nom est : "<<nom<<" le solde est : "<<solde<<endl;
}

void compte::retrait(float S)
{
    this->solde -= S;
}

void compte::depot(float S)
{
    this->solde += S;
}


