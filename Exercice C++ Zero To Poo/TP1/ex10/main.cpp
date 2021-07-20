#include <iostream>

using namespace std;

int main()
{
    int T[50],max,min,posMax=0,posMin=0;

    int N,aide;
    cout<<"tappez taille de tableau N Max 50"<<endl;
    cin>>N;


    for (int i=0; i<N; i++)
    {
        cout<<"Element T["<<i<<"]"<<endl;
        cin>>T[i];
    }

    min = T[0];
    max = T[0];



    for (int i=1; i<N; i++)
    {
        if(T[i]<min)
        {
            min=T[i];
            posMin = i;
        }
        if(T[i]>max)
        {
            max=T[i];
            posMax = i;
        }
    }

    cout<<"La valeur min est :"<<min<<" il existe dons la case "<<posMin<<" dans l'adress " <<"  "<< (int)&T[posMin]<<endl;
    cout<<"La valeur max est :"<<max<<" il existe dons la case "<<posMax<<" dans l'adress " <<"  "<< (int)&T[posMax]<<endl;


    return 0;
}
