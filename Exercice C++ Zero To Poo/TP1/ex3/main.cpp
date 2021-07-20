#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

    int n,i, fac= 1;

    cout<<"ENTRER UN ENTIER : ";
    cin>>n;

    for (int i=1;i<=n;i++) fac= fac * i;

    /*
    i=1;
    while(i<=n){
        fac= fac * i;
        i++;
    }
    */
    /*
    i=1;

    do{
        fac= fac * i;
        i++;
    }while(i<=n);
    */


    cout<<"\nn ="<<n<<" n!= "<<fac;


    return 0;
}
