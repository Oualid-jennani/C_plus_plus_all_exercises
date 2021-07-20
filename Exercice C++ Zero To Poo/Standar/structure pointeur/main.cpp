#include <iostream>

using namespace std;

struct point{
    int num;
    float x;
    float y;
};

void saisir(point *);
void affiche(const point *);
void saisirT(point *, const int &);
void afficheT(point *, const int &);

int main()
{
    int n;
    point *T;
    point p;

    saisir(&p);
    affiche(&p);

    cout<<"tapez la taille de tableau"<<endl;
    cin>>n;
    T = new point[n];
    saisirT(T,n);
    afficheT(T,n);

    delete []T;
    return 0;
}

void saisir(point *p){
    cout<<"tapes num et x et y"<<endl;
    cin>>p->num>>p->x>>p->y;
}

void affiche(const point *p){
     cout<<"num : "<<p->num<<" x : "<<p->x<<" y : "<<p->y<<endl;
}

void saisirT(point *T , const int &N){
    for(int i=0;i<N;i++){
        saisir(&T[i]);
    }
}
void afficheT(point *T , const int &N){
    for(int i=0;i<N;i++){
        affiche(&T[i]);
    }
}
