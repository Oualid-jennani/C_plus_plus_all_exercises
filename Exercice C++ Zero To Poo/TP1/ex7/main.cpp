#include <iostream>

using namespace std;

int main()
{
    int a,b,res;
    char op;
    cout << "Tapez 2 entier" << endl;
    cin>>a>>b;

    cin>>op;
    switch(op){
        case '+': res=a+b;
        break;
        case '-': res=a-b;
        break;
        case '/': res=a/b;
        break;
        case '*': res=a*b;
        break;

        default:
        cout << "Erreur" <<endl;
    }

    cout << "Le resultat est : " <<res<< endl;


    return 0;
}
