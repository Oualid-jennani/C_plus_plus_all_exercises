#ifndef PL_H
#define PL_H
#include<iostream>
using namespace std;
class PL
{
    public:
        PL(int =20);
        PL(const PL &);
        virtual ~PL();
        void operator<(int );
        int operator>(int);
        PL& operator=(const PL &);
        int operator[](int);
        bool pleinne();
        bool vide();
        void affichep() ;
        PL &operator+(PL&);
        PL &operator+(int );
        friend PL &operator+(int, PL& );
        friend ostream& operator<<(ostream &str, PL &);
        friend istream& operator>>(istream &, PL &);
    private:
        int* pile, taille, hauteur;
};
#endif // PL_H
