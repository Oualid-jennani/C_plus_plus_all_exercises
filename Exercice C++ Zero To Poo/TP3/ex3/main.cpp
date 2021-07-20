#include <iostream>

using namespace std;

void LIRE_TAB(int*,int);
void ECRIRE_TAB(int*,int);

int MAX1(int*,int);
int MAX2(int*,int);
int* MAX3(int*,int);


int main()
{
    int *A;
    int N;

    cout<<" Hello tappez taille de tab A (max = 20)"<<endl;
    cin>>N;

    A = new int[N];
    LIRE_TAB(A,N);
    ECRIRE_TAB(A,N);


    cout<<" \nle elements max est : "<<MAX1(A,N)<<endl;
    cout<<" \nla pos elements max est : "<<MAX2(A,N)<<endl;
    cout<<" \nl'adress elements max est : "<<MAX3(A,N)<<endl;


    delete []A;


    return 0;
}

void LIRE_TAB (int tab[],int n){

    for (int i=0;i<n;i++)
    {
        cout<<"Element"<<i+1<<endl;
        cin>>tab[i];
    }

}
void ECRIRE_TAB (int tab[],int n){
    cout<<"|";
    for (int i=1;i<n;i++)
    {
        cout<<tab[i]<<"|";
    }
}






int MAX1 (int *tab,int n){
    int max = tab[0];
    for (int i=1;i<n;i++)
    {
        if(max < tab[i]){
            max = tab[i];
        }
    }
    return max;

}
int MAX2 (int *tab, int n){
    int posmax = 0;
    for (int i=0;i<n;i++)
    {
        if( tab[posmax] < tab[i]){
            posmax = i;
        }
    }

    return posmax;
}
int* MAX3 (int *tab, int n){
    int *addmax = tab;

    for (int i=1;i<n;i++)
    {
        if(*addmax < tab[i]){
            addmax = tab + i;
        }
    }

    return addmax;
}



