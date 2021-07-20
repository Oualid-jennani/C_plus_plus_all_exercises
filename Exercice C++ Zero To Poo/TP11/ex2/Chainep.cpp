#include "chainep.h"
#include <iostream>
using namespace std;
Chainep::Chainep()
{
adr=new char[20];
adr[0]= '\0' ;
}
Chainep::Chainep(char* ch)
{ int l=0, i;
while(ch[l]!='\0') l++;
adr=new char[l+1];
for(i=0;i<=l;i++) adr[i]=ch[i];
}
Chainep::Chainep(const Chainep &v)
{ int i;
adr=new char[v.taille()+1];
for(i=0;i<=v.taille();i++) adr[i]=v.adr[i];
cout<<"*****constructeur par recopie*********"<<endl;
}
Chainep::~Chainep()
{
delete [] adr;
}

int Chainep::taille() const
{ int l=0;
while(adr[l]!='\0') l++;
return l;
}
void Chainep::affiche() const
{ int i;
for(i=0;i<taille();i++) cout<<adr[i];
cout<<endl;
}
void Chainep::ajout(char c, int p)
{ int i;
if(p>=0&&p<=taille())
{ for(i=taille();i>=p;i--) adr[i+1]=adr[i];
adr[p]=c;
}
}
void Chainep::supp(int p)
{ int i;
if(p>=0&&p<taille())
for(i=p;i<=taille();i++) adr[i]=adr[i+1];
}
Chainep& Chainep::inv()
{ static Chainep res;
int i;
for(i=0;i<taille();i++) res.adr[i]=adr[taille()-1-i];
res.adr[taille()]='\0';
return res;
}
bool Chainep::appart(char c)
{ int i;
for(i=0;i<taille();i++) if(adr[i]==c) return true;
return false;
}
Chainep &Chainep::operator=(const Chainep &v)
{ int i;
delete [] adr;
adr=new char[v.taille()+1];
for(i=0;i<=v.taille();i++) adr[i]=v.adr[i];
cout<<"*****operateur d'affectation classe mere*********"<<endl;
return *this;
}
bool Chainep::operator==(const Chainep &v)
{ int i;
if(v.taille()==taille())
{
for(i=0;i<taille();i++) if(adr[i]!=v.adr[i]) return false ;
return true;
}
else return false;
}
Chainep &Chainep::operator+(const Chainep &v)
{ int i;
static Chainep res;
delete [] res.adr;
res.adr=new char[v.taille()+taille()+1];
for(i=0;i<taille();i++) res.adr[i]=adr[i];
for(i=taille();i<=taille()+v.taille();i++) res.adr[i]=v.adr[i-taille()];
// res.adr[v.taille()+taille()]='\0';
return res;
}
char Chainep::operator[](int i)
{
return adr[i];
}
ostream &operator<<(ostream &ostr, Chainep& v)
{ int i;
for(i=0;i<v.taille();i++) ostr<<v.adr[i];
ostr<<endl;
return ostr;
}
istream &operator>>(istream &istr, Chainep& v)
{
istr>>v.adr;
return istr;
}
