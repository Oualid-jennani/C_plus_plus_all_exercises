#include <iostream>

using namespace std;

struct point{
    int num;
    float x;
    float y;
};

void saisir(point &);
void affiche(const point &);

int main()
{
    point p;

    saisir(p);
    affiche(p);

    return 0;
}
void saisir(point &p){
    cout<<"tapes num et x et y"<<endl;
    cin>>p.num>>p.x>>p.y;
}

void affiche(const point &p){
     cout<<"num : "<<p.num<<" x : "<<p.x<<" y : "<<p.y<<endl;
}
