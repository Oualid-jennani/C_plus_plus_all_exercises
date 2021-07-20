#include <iostream>

using namespace std;

int main()
{
    int i,N,nb,S=0 , P=1;;
    float M ;
    cout << "tapez le nombre de entier" << endl;

    cin>>N;

    for(i=0;i<N;i++){
        cin>>nb;
        P=P*nb;
        S=S+nb;
    }

    M = S/N;


    /*i=0;
    while(i<N){
        cin>>nb;

        p=p*nb;
        S=S+nb;

        i++;
    }


    i=0;
    do{
        cin>>nb;

        p=p*nb;
        S=S+nb;

        i++;

    }while(i<N);
    */
    cout << "La somme est : " <<S<<"\nle produit est :"<<P<<"\nla moyenne  est :"<<M<<endl;


    return 0;
}
