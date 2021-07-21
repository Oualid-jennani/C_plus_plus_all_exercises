#include "vecteur3d.h"
#include <string.h>
#include <iostream>

using namespace std;

vecteur3d::vecteur3d()
{
    //ctor
    this->Nom = new char;
    this->Nom ="V-aleatoire";
    x=0;y=0;z=0;
}

vecteur3d::vecteur3d(char *Nom1,float x1,float y1,float z1)
{
    //ctor
    this->Nom = new char;
    this->Nom = Nom1;
    x= x1;y=y1;z=z1;
}


vecteur3d::~vecteur3d()
{
    //dtor
    delete[]Nom;
}




/*------------------------------------------------------*/
vecteur3d vecteur3d::sym_vec1()
{
    vecteur3d res;
    res.x = -x;res.y = -y;res.z = -z;
    return res;

}
vecteur3d *vecteur3d::sym_vec2()
{
    vecteur3d *res;
    res = new vecteur3d();

/*
    string sys = "_sym";
    res->Nom = new char;
    strcpy(res->Nom,Nom);
    strcat(res->Nom,sys.c_str());
*/

    res->x = -x;res->y = -y;res->z = -z;
    return res;

}
vecteur3d &vecteur3d::sym_vec3()
{
    static vecteur3d res;
    res.x = -x;res.y = -y;res.z = -z;
    return res;
}
/*------------------------------------------------------*/







/*------------------------------------------------------*/
bool vecteur3d::coincide1(vecteur3d v)
{
    if(v.x == x && v.y ==y && v.z == z){
        return true;
    }
    else return false;
}

bool vecteur3d::coincide2(vecteur3d *v)
{
    if(v->x == x && v->y == y && v->z == z){
        return true;
    }
    else return false;
}

bool vecteur3d::coincide3(vecteur3d &v)
{
    if(v.x == x && v.y ==y && v.z == z){
        return true;
    }
    else return false;
}

bool vecteur3d::coincide4(vecteur3d &v)const
{
    if(v.x == x && v.y ==y && v.z == z){
        return true;
    }
    else return false;
}
/*------------------------------------------------------*/




/*------------------------------------------------------*/
vecteur3d::vecteur3d(const vecteur3d &v_c)
{
    Nom = v_c.Nom;
    x= v_c.x;
    y=v_c.y;
    z=v_c.z;
}
/*------------------------------------------------------*/



/*------------------------------------------------------*/
bool vecteur3d::operator==(const vecteur3d &a) {
    if (a.x == x && a.y==y && a.z==z) {
        return true;
    }
    return false;
}


vecteur3d& vecteur3d::operator=(const vecteur3d & a) {
    x = a.x;
    y = a.y;
    z = a.z;

    return *this;
}
istream& operator>>(istream &istr, vecteur3d &v)
{
    cout<<"Entrer le nom de vecteur"<<endl;
    v.Nom = new char;
    istr>>v.Nom;
    cout<<"X"<<endl;
    istr>>v.x;
    cout<<"Y"<<endl;
    istr>>v.y;
    cout<<"Z"<<endl;
    istr>>v.z;

    return istr;
}
/*------------------------------------------------------*/







/*------------------------------------------------------*/
vecteur3d& vecteur3d::operator*(float n)
{
    static vecteur3d w;
    w.Nom = new char;
    w.Nom = Nom;
    w.x=x*n;
    w.y=y*n;
    w.z=z*n;

    return w;
}

vecteur3d& operator*(float n, vecteur3d &v)
{
    static vecteur3d w;
    w.Nom = new char;
    w.Nom = v.Nom;
    w.x=v.x*n;
    w.y=v.y*n;
    w.z=v.z*n;

    return w;
}
/*------------------------------------------------------*/






/*------------------------------------------------------*/
void vecteur3d::Affiche()const
{
    cout<<"Nom : "<<Nom<<" | X : "<<x<<"| Y : "<<z<<"| Z : "<<z<<endl;
}
/*------------------------------------------------------*/











