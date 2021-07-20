#include <iostream>

using namespace std;

void changeManiereA(int*,int*);
void changeManiereB(int&,int&);



int main()
{

    cout << "---------------Maniere A-----------------" << endl;
    int a,b;

    cout << "entrez a et b " << endl;
    cin>>a>>b;
    cout << "a = "<<a<<"   "<<"b = "<<b<< endl;
    changeManiereA(&a,&b);
    cout << "\na <<== change ==>> b " << endl;
    cout << "\na = "<<a<<"   "<<"b = "<<b<< endl;

    cout << "\n\n\n";

    cout << "---------------Maniere A-----------------" << endl;
    int x,y;

    cout << "entrez x et y " << endl;
    cin>>x>>y;
    cout << "x = "<<x<<"   "<<"y = "<<y<< endl;
    changeManiereB(x,y);
    cout << "\nx <<== change ==>> y " << endl;
    cout << "\nx = "<<x<<"   "<<"y = "<<y<< endl;

    return 0;
}


void changeManiereA(int *pa , int *pb){
    int aide;
    aide=*pa;
    *pa=*pb;
    *pb=aide;
}

void changeManiereB(int &ra , int &rb){

    int aide;
    aide=ra;
    ra=rb;
    rb=aide;
}
