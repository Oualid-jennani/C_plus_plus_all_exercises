#include "vecteur3d.h"
#include <math.h>
#include <iostream>

using namespace std;

vecteur3d::~vecteur3d()
{
    //dtor
}



//--------------------------------- 1 --------------------------------
bool vecteur3d::coincide1(vecteur3d v)
{
    if(v.x == x && v.y ==y && v.z == z){
        return true;
    }
    else return false;
}

bool vecteur3d::coincide2(vecteur3d *v)
{
    if(v->x == x && v->y ==y && v->z == z){
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


//--------------------------------- 2 --------------------------------
vecteur3d vecteur3d::norm_max1(vecteur3d v)
{
    float a,b;
    a = sqrt(x*x + y*y + z*z);
    b = sqrt(v.x*v.x + v.y*v.y + v.z*v.z);

    if(b>=a){
        return v;
    }
    else {
        return *this;
    }
}

vecteur3d *vecteur3d::norm_max2(vecteur3d v)
{
    float a,b;
    a = sqrt(x*x + y*y + z*z);
    b = sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
    if(b>=a){
        return &v;
    }
    else {
        return this;
    }
}

vecteur3d &vecteur3d::norm_max3(vecteur3d v)
{
    float a,b;
    a = sqrt(x*x + y*y + z*z);
    b = sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
    if(b>=a){
        return v;
    }
    else {
        return *this;
    }
}



















vecteur3d vecteur3d::vect_oppose1()
{
    vecteur3d res;
    res.x = -x;res.y = -y;res.z = -z;
    return res;

}

vecteur3d *vecteur3d::vect_oppose2()
{
    vecteur3d *res;
    res = new vecteur3d();
    res->x = -x;res->y = -y;res->z = -z;
    return res;

}

vecteur3d &vecteur3d::vect_oppose3()
{
    static vecteur3d res;
    res.x = -x;res.y = -y;res.z = -z;
    return res;

}






void vecteur3d::GetVecteur(){
    cout<<"x : "<<x<<" y : "<<y<<" z : "<<z<<endl;
}
