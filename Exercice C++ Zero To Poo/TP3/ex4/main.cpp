#include <iostream>

using namespace std;

int somme(int);

int main()
{
    int n;

    do{
        cout << "Tapez n :" << endl;
        cin>>n;

        if (n<0){

            cout << "réessayez" <<endl;
        }

    }while(n<0);



    cout <<somme(n);

    return 0;
}

int somme (int n){
    if(n==0){
        return 0;
    }
    else{
        return n+somme(n-1);
    }

}
