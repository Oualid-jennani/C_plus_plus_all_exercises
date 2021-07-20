#include <iostream>

using namespace std;

void change(int&,int&);

float somme(const float&,const float&);


int main()
{
    int A,B;
    cout << "entrez a et b " << endl;
    cin>>A>>B;

    cout << "a = "<<A<<"   "<<"b = "<<B<< endl;
    change(A,B);
    cout << "\na <<== change ==>> b " << endl;
    cout << "\na = "<<A<<"   "<<"b = "<<B<< endl;




    float a,b;
    a=A;b=B;
    cout << "\na + b = "<<somme(a,b)<< endl;


    return 0;
}

float somme(const float &ra ,const float &rb){
    return ra+rb;
}

void change(int &ra , int &rb){

    int c;
    c=ra;
    ra=rb;
    rb=c;
}
