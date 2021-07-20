#include <iostream>
#include "PL.h"

using namespace std;

int main()
{
    int i,p;
    PL obj(5), obj1;

    cout<<"charge ....";
    for(i=0;obj.pleinne()==false;i++){obj<(2*i);}

    cout<<"\n------------------(1)--------------------\n";
    obj.affichep();

    cout<<"\n------------------(2)--------------------\n";
    p=obj>i;
    cout<<p<<endl;
    obj.affichep();

    cout<<"\n------------------(3)--------------------\n";
    obj1=obj;
    obj1.affichep();


    cout<<"\n------------------(4)--------------------\n";
    PL obj2(obj);
    obj2.affichep();


    cout<<"\n------------------(5)--------------------\n";
    PL ob=obj, obc ;
    ob.affichep();

    cout<<"\n------------------(6)--------------------\n";
    obc=obj1;
    obc.affichep();
    cout<<"\n"<<obc[2];

    cout<<"\n------------------(7)--------------------\n";
    PL test;
    test = obj+obj1;
    test.affichep();

    cout<<"\n------------------(8)--------------------\n";
    (obc+5).affichep();
    cout<<"\n------------------(9)--------------------\n";
    (10+obc).affichep();

    cout<<"\n------------------(10)--------------------\n";
    PL abb;
    cout<<"cinnnnnnnn"<<endl;
    cin>>abb;
    cout<<abb;


    return 0;
}



