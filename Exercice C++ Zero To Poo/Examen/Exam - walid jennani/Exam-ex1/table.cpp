#include "table.h"
#include<iostream>
using namespace std;

table::table(int n)
{
    //ctor
    taille=n;
    TabPoints=new point[taille];
}

table::table(const table &obj)
{
    taille=obj.taille;
    TabPoints=new point[taille];
    for(int i=0;i<obj.taille;i++)
    TabPoints[i]=obj.TabPoints[i];
    cout<<"construction par recopie"<<endl;
}


table::~table()
{
    //dtor
    delete []TabPoints;
}


void table::saisie(){
    cout<<"--------------saisir--------------\n";
    for(int i=0;i<taille;i++){
        cout<<"tappez point "<<i+1<<endl;
        cin>>TabPoints[i];
    }

}

void table::affiche(){
    cout<<"--------------affichage--------------\n";
    for(int i=0;i<taille;i++){
        cout<<"P"<<i+1<<TabPoints[i];
    }

}

table& table::operator=(const table &obj)
{
    taille=obj.taille;
    delete [] TabPoints;
    TabPoints=new point[taille];
    for(int i=0;i<obj.taille;i++)
    TabPoints[i]=obj.TabPoints[i];

    return *this;
}


bool table::operator==(const table &T) {

    bool test = true;

    if (T.taille == taille){
        for(int i=0;i<taille;i++){
            if((T.TabPoints[i]==TabPoints[i]) != true)test = false;
        }
    }else test = false;

    return test;
}


table &table::operator+(table &T)
{
    static table res;
    res.taille=(taille+T.taille);
    res.TabPoints=new point[res.taille];

    for(int i=0;i<res.taille;i++)
    {
        if(i<taille)*(res.TabPoints+i)=*(TabPoints+i);
        else *(res.TabPoints+i)=*(T.TabPoints+(i-taille));
    }

    /*-----------chose 2------------*/
    /*
    static table res;
    res.taille=taille;
    res.TabPoints=new point[taille];
    for(int i=0;i<taille;i++)
    {
        *(res.TabPoints+i)=*(T.TabPoints+i)+*(TabPoints+i);
    }
    */

    cout<<"Concate tableau de +"<<endl;
    return res;
}












