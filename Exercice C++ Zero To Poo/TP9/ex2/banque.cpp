#include "banque.h"
#include "compte.h"


banque::banque()
{
    //ctor
}

banque::~banque()
{
    //dtor
}

int banque::nbrC = 0;
void banque::add(compte c)
{
    tabC[nbrC] = c;
    nbrC++;
}
