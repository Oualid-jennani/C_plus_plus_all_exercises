#include <iostream>

using namespace std;

int main()
{


    int N,aide;
    int *P1,*P2;


    cout<<"tappez taille de tableau N "<<endl;
    cin>>N;

    int A[N];

    for (P1=A; P1<A+N; P1++)
    {
        cout<<"Element "<<P1-A+1<<endl;
        cin>>*P1;
    }

    for (P1=A; P1<A+N; P1++)
    {
        for (P2=A; P2<(A+N)-(P1-A)-1; P2++)
        {
            if(*P2 < *(P2+1))
            {
                aide = *P2;
                *P2 = *(P2+1);
                *(P2+1) = aide;
            }

        }
    }

    cout<<"l'ordre inverse"<<endl;
    for (P1=A; P1<A+N; P1++)
    {
        cout<<"|"<<*P1;
    }
    cout<<"|\n\n";


    return 0;
}
