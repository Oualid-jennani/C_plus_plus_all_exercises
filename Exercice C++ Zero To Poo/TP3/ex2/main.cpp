#include <iostream>

using namespace std;

int puissance(int* , int *);

int main()
{
    int A,B;

    do{
        cout << "Tapez a et b :" << endl;
        cin>>A>>B;

        if (B<0){

            cout << "b < 0 !!! réessayez" <<endl;
        }

    }while(B<0);

    cout << "a ^ b est : " <<puissance(&A, &B)<< endl;

    return 0;
}

int puissance(int *a, int *b){
    int res;

    if(*b==0){res = 1;}
    else {
        res = 1;
        for(int i=1; i<= *b ;i++){
            res = res * (*a);
        }
    }

    return res;
}
