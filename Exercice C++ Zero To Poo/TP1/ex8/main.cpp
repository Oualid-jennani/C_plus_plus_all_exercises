#include <iostream>

using namespace std;

int main()
{
    int T[50],TPOS[50],TNEG[50];


    int N,aide;



    cout<<"tappez taille de tableau N Max 50"<<endl;
    cin>>N;



    for (int i=0; i<N; i++)
    {
        cout<<"Element T["<<i<<"]"<<endl;
        cin>>T[i];
    }

    for (int i=0; i<N; i++)
        cout<<"|"<<T[i];
    cout<<"|\n";
  /*
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N-i-1; j++)
        {
            if(T[j] < T[j+1])
            {
                aide = T[j];
                T[j] = T[j+1];
                T[j+1]= aide;
            }

        }
    }
    */
    for (int i=0; i<N/2; i++)
    {
        aide = T[i];
        T[i] = T[N-i-1];
        T[N-i-1]= aide;
    }

    cout<<"l'ordre inverse"<<endl;
    for (int i=0; i<N; i++)
        cout<<"|"<<T[i];
    cout<<"|\n";


    int posN=0,posP=0;
    for (int i=0; i<N; i++)
    {
        if(T[i]<0)
        {
            TNEG[posN]=T[i];
            posN++;

        }

        else if(T[i]>0)
        {
            TPOS[posP]=T[i];
            posP++;
        }

    }

    cout<<"\n";

    cout<<"Tpos"<<endl;
    for (int i=0; i<posP ; i++)
        cout<<"|"<<TPOS[i];

    cout<<"\n";


    cout<<"Tneg"<<endl;
    for (int i=0; i<posN; i++)
        cout<<"|"<<TNEG[i];












    return 0;
}
