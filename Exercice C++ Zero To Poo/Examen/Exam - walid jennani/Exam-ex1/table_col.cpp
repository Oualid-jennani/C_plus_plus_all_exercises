#include "table_col.h"
#include<iostream>
using namespace std;

table_col::table_col(int n,char *c):table(n)
{
    //ctor
    couleur = new char;
    couleur = c;
}

table_col::table_col(const table_col &obj):table(obj)
{
    couleur=new char;
    couleur = obj.couleur;

}

table_col::~table_col()
{
    //dtor
    delete []couleur;
}


void table_col::affiche(){
    table::affiche();
    cout<<"couleur de tableau ==> "<<couleur<<endl;
}




table_col& table_col::operator=(const table &obj)
{
    table::operator=(obj);
    return *this;
}

table_col& table_col::operator=(const table_col &obj)
{
    table::taille = obj.taille;
    table::TabPoints = obj.TabPoints;

    delete [] couleur;
    couleur=new char;
    couleur = obj.couleur;

    return *this;
}











