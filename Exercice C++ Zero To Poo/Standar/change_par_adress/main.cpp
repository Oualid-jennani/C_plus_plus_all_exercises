#include <iostream>

using namespace std;

void change(int*,int*);

int main()
{
    int a,b;
    cout << "entrez a et b " << endl;
    cin>>a>>b;

    cout << "a = "<<a<<"   "<<"b = "<<b<< endl;
    change(&a,&b);
    cout << "\na <<== change ==>> b " << endl;
    cout << "\na = "<<a<<"   "<<"b = "<<b<< endl;

    return 0;
}


void change(int *a , int *b){

    int c;

    c=*a;
    *a=*b;
    *b=c;


}
