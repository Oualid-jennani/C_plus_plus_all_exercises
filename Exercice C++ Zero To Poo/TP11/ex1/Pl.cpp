#include "PL.h"
#include<iostream>
using namespace std;

PL::PL(int n)
{
    taille=n;
    hauteur=0;
    pile=new int[taille];
}

PL::PL(const PL &obj)
{
    int i;
    taille=obj.taille;
    hauteur=obj.hauteur;
    pile=new int[taille];
    for(i=0;i<obj.hauteur;i++)
    pile[i]=obj.pile[i];
    cout<<"construction par recopie"<<endl;
}
PL::~PL()
{
    delete [] pile;
}

void PL::operator<(int i)
{
    pile[hauteur]=i;
    hauteur++;
}

int PL::operator>(int i)
{
    i=pile[hauteur-1];
    hauteur--;
    return i;
}

PL& PL::operator=(const PL &obj)
{
    int i;
    taille=obj.taille;
    hauteur=obj.hauteur;
    delete [] pile;
    pile=new int[taille];
    for(i=0;i<obj.hauteur;i++)
    pile[i]=obj.pile[i];
    cout<<"surcharge de ="<<endl;
    return *this;
}

int PL::operator[](int n)
{
    return *(pile+n);
}

PL &PL::operator+(PL &q)
{
    static PL r;
    r.taille=taille;
    r.hauteur=hauteur;
    r.pile=new int[taille];
    for(int i=0;i<hauteur;i++)
    {
        *(r.pile+i)=*(q.pile+i)+*(pile+i);
    }
    cout<<"Concate de +"<<endl;
    return r;
}

PL& PL::operator+(int x)
{
    static PL q;
    q.taille=taille;
    q.hauteur=hauteur;
    q.pile=new int[taille];
    for(int i=0;i<hauteur;i++)
    q.pile[i]=pile[i]+x;
    return q;
}

PL& operator+(int x, PL &p)
{
    static PL q;
    q.taille=p.taille;
    q.hauteur=p.hauteur;
    q.pile=new int[p.taille];
    for(int i=0;i<p.hauteur;i++)
    q.pile[i]=p.pile[i]+x;
    return q;
}

ostream& operator<<(ostream &str, PL & p)
{
    str<<"[";
    for(int i=0;i<p.hauteur;i++)
    str<<" "<<p.pile[i];
    str<<" ]";

    return str;
}
istream& operator>>(istream &istr, PL & p)
{
    cout<<"Entrer le nombre d'elt de votre pile"<<endl;
    istr>>p.hauteur;
    cout<<"Entrer votre pile"<<endl;
    for(int i=0;i<p.hauteur;i++)
    istr>>p.pile[i];
    return istr;
}

bool PL::pleinne()
{
    if(hauteur==taille) return true;
    else return false;
}
bool PL::vide()
{
    if(hauteur==0) return true;
    else return false;
}
void PL::affichep()
{
    int i;
    for(i=0;i<hauteur;i++)
    cout<<pile[i]<<" | ";
}
