#include <iostream>
#include "point.h"
using namespace std;

/*------------------------------------------------------*/
point::point()
{
    //ctor
    this->x = 0;
    this->y = 0;
}

point::point(int x,int y)
{
    //ctor
    this->x = x;
    this->y = y;
}


point::~point()
{
    //dtor
}
/*------------------------------------------------------*/


/*------------------------------------------------------*/
point &point::operator+(point &p)
{
    static point res;
    res.x = p.x + x;
    res.y = p.y + y;
    cout<<"Concate de +"<<endl;
    return res;
}
bool point::operator==(const point &p) {
    if (p.x == x && p.y == y) {
        return true;
    }
    return false;
}
ostream& operator<<(ostream &str, point & p)
{
    str<<"["<<p.x<<","<<p.y<<"]"<<endl;

    return str;
}
istream& operator>>(istream &istr, point & p)
{
    cout<<"Entrer x ==> ";
    istr>>p.x;
    cout<<"Entrer y ==> ";
    istr>>p.y;

    return istr;
}
/*------------------------------------------------------*/


/*------------------------------------------------------*/
point& point::operator*(float n)
{
    static point res;
    res.x=x*n;
    res.y=y*n;

    return res;
}

point& operator*(float n, point &p)
{
    static point res;
    res.x=p.x*n;
    res.y=p.y*n;

    return res;
}
/*------------------------------------------------------*/












