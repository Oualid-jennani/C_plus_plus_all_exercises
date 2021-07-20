#include <iostream>

using namespace std;

int ack(int,int);

int main()
{
    int m ,n ,resultat = 0;

    cout<<"Programme de calcul de la fonction d'Ackermann\n";
    cout<<"ATTENTION: des grandes valeurs de m et n \npeuvent entrainer un temps de calcul tres long.\n\n";

    cout<<"m ?";
    cin>>m;
    cout<<"n ?";
    cin>>n;


    resultat = ack(m, n);
    cout<<"Resultat: "<<resultat<<endl;


    return 0;
}


int ack(int m,int n)
{
    if(m == 0 && n > 0)
        return n+1;
    else if(n == 0 && m > 0)
        return ack(m-1, 1);
    else if (n > 0 && m > 0)
        return ack(m-1, ack(m, n-1));
}
