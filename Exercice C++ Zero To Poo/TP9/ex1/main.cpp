#include <iostream>
#include <string.h>
#include "personne.h"

using namespace std;

int main()
{
    personne A,B("alae","jennani",16);
    const personne C;
    C.afichier();
    personne *D;
    D = new personne("ahmed","jennani",21);
    D->afichier();

    delete D;
    return 0;
}
