#include <iostream>

using namespace std;

int main()
{

    int *A,*B,*PA,*PB;
    int N, M;




    cout<<"tappez taille de tab A (max = 20)"<<endl;
    cin>>N;
    A=new int[N];

    for (PA=A; PA<A+N; PA++)
    {
        cout<<"Element"<<PA-A+1<<endl;
        cin>>*PA;
    }

    cout<<"tappez taille de tab B (max = 10)"<<endl;
    cin>>M;
    B=new int[M];

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

    delete []A;
    delete []B;


    return 0;
}
