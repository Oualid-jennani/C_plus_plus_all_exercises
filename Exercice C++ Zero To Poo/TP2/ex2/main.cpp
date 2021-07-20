#include <iostream>

using namespace std;

int main()
{

    int A[50];
    int N;
    int X;
    int *P1,*P2;

    cout<<"tappez taille de tableau "<<endl;
    cin>>N;

    for (P1=A;P1<A+N; P1++)
    {
        cout<<"Element "<<P1-A+1<<endl;
        cin>>*P1;
    }

    cout<<"Affichage Tableau \n";
    for (P1=A; P1<A+N; P1++)
        cout<<"|"<<*P1;
    cout<<"|\n";


    cout<<"Tapez l'élément X à éliminer du tableau : "<<endl;
    cin>>X;


    for (P1=P2=A; P1<A+N; P1++)
    {
    *P2 = *P1;
    if (*P2 != X)
       P2++;
    }


    N = P2-A;


    cout<<"Affichage nouveau Tableau \n";
    for (P1=A; P1<A+N; P1++)
        cout<<"|"<<*P1;
    cout<<"|\n";





    return 0;
}
