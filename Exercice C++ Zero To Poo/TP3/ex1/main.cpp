#include <iostream>

using namespace std;
void LIRE_TAB(int*,int);
void ECRIRE_TAB(int*,int);
int SOMME_TAB(int*,int);
int MIN_TAB(int*,int);
int MAX_TAB(int*,int);


int main()
{
    int *A;
    int N;

    cout<<" Hello tappez taille de tab A (max = 20)"<<endl;
    cin>>N;

    A = new int[N];
    LIRE_TAB(A,N);
    ECRIRE_TAB(A,N);

    cout<<" \n\nla somme des elements de tableau est : "<<SOMME_TAB(A,N)<<endl;
    cout<<" \nle elements min est : "<<MIN_TAB(A,N)<<endl;
    cout<<" \nle elements max est : "<<MAX_TAB(A,N)<<endl;

    delete []A;
    return 0;
}


void LIRE_TAB (int a[],int n){

    for (int i=0;i<n;i++)
    {
        cout<<"Element"<<i+1<<endl;
        cin>>a[i];
    }

}

void ECRIRE_TAB (int a[],int n){
    cout<<"|";
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<"|";
    }
}

int SOMME_TAB (int a[],int n){

    int somme = 0;
    for (int i=0;i<n;i++)
    {
        somme = somme + a[i];
    }

    return somme;
}

int MIN_TAB (int a[],int n){

    int min = a[0];
    for (int i=1;i<n;i++)
    {
        if(a[i]<min) min = a[i];
    }

    return min;
}


int MAX_TAB (int a[],int n){

    int max = a[0];
    for (int i=1;i<n;i++)
    {
        if(a[i]>max) max = a[i];
    }

    return max;
}



