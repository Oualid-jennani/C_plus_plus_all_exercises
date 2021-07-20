#include <iostream>

using namespace std;

int main()
{
    int V,I,Q;
    float P,M;
    cout <<"entrer I,Q,V" << endl;
    cin>>I>>Q>>V;
    if (Q<=V)
    {
        P=(float)100*V/I;
        M=V/2+1;
    cout<<"le P est:"<<P<<"le M est :"<<M<<endl;
    }else{
            cout<<"le vote n'est pas atteint"<<endl;
    }

    return 0;
}
