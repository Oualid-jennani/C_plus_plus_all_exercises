#include <iostream>
#include "point.h"


point::point()
{
    //ctor
}

point::~point()
{
    //dtor
}

using namespace std;

int point::nbrPoint = 0;

void point::saisie()
{
	cout<<"Entre x "<<endl;
	cin>>this->x;

	cout<<"Entre y "<<endl;
	cin>>this->y;

	point::nbrPoint++;
}

void point::affiche()
{
	cout<<"x = "<<this->x<<"   y = "<<this->y<<endl;
}
void point::afficheNbr()
{
    cout<<"nombre de points = "<<nbrPoint<<endl;
}
void point::translate(float dx, float dy)
{
	this->x+=dx;
	this->y+=dy;
}



