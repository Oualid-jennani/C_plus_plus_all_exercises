#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;char rep = 'o';
    double Un=1;



    do{

        Un=1;

        cout << "Entrez le rang n de Un a calculer : " << endl;


        cin>>n;
        for (i=1;i<=n;i++)
        {
            Un=(Un + (2/Un) ) /2;
        }
        cout<<"la racine de " << setprecision(10)<<n<<" est :"<<Un<<endl;


        cout<<"Voulez vous continue"<<endl;
        cin>>rep;

    }while(rep=='o');




    return 0;
}
