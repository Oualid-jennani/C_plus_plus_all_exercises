#include <iostream>
#include "point.h"

using namespace std;

point::point()
{
    //ctor
}

point::~point()
{
    //dtor
}



int point::nbrPoint = 0;

void point::saisie()
{
	cout<<"Entre x "<<endl;
	cin>>this->x;

	cout<<"Entre y "<<endl;
	cin>>this->y;

	point::nbrPoint++;
}


void point::afficheNbr()
{
    cout<<"nombre de points = "<<nbrPoint<<endl;
}




