#include <iostream>

using namespace std;

int main()
{

    int A[20], B[10];
    int N, M;
    int *PA,*PB;

    cout<<"tappez taille de tab A (max = 20)"<<endl;
    cin>>N;
    for (PA=A; PA<A+N; PA++)
    {
        cout<<"Element"<<PA-A+1<<endl;
        cin>>*PA;
    }

    cout<<"tappez taille de tab B (max = 10)"<<endl;
    cin>>M;
    for (PB=B; PB<B+M; PB++)
    {
        cout<<"Element "<<PB-B+1<<endl;
        cin>>*PB;
    }

    cout<<"Tableau A\n";
    for (PA=A; PA<A+N; PA++)
        cout<<"|"<<*PA;

    cout<<"|\n";

    cout<<"Tableau B\n";
    for (PB=B; PB<B+M; PB++)
        cout<<"|"<<*PB;

    cout<<"|\n\n";


    for (PA=A+N,PB=B ; PB<B+M ; PA++,PB++)
        *PA = *PB;

    /*
    PB = B;
    for(PA=A+N;PA<A+M+N;PA++){


        *PA = *PB;

        PB++;

    }
    N += M;
    */

    cout<<"Tableau A Apret transfere\n";
    for (PA=A; PA<A+N+M; PA++)
        cout<<"|"<<*PA;
    cout<<"|\n";


    return 0;
}
