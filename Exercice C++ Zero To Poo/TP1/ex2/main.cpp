#include <iostream>

using namespace std;

int main()
{

    int I, V, M, P, Q;

    cout<<"Entrer le nombre d'inscrits : "; cin>>I;
    cout<<"Entrer le nombre de votants : "; cin>>V;
    cout<<"Entrer le quorum : "; cin>>Q;

    P = V*100/I;
    M = V/2 +1;
    if(P > Q)
    {
        cout<<"Quorum atteint - vote valable\n";
        cout<<"Participation: "<<P<<"% - Majorite obtenue pour : ";
        cout<< M <<" bulletins\n";
    }
    else
    {
        cout<<"Quorum non atteint - vote non valable\n";
    }
        return 0;
}
