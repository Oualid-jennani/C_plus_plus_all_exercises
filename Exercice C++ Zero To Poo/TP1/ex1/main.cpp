#include <iostream>

using namespace std;

int main()
{

    char u ;
    cout << "Entrer un caractère" << endl;
    cin>>u;
    if (u>='A'&&u<='Z'){
        u = u + 32;
        cout<<u<<endl;
    }else{
        cout<<"erreur"<<endl;
    }

    /*
    int i;
    char u ;
    cout << "entrer un caractére"<< endl;
    cin>>u;
    i=u;

    if(i>=65 && i<=97)u=i+32;
    if(i>=97 && i<=122)u=i-32;

    cout <<"le code ASCII du caractère est :"<<i<<endl;
    */



    return 0;
}
