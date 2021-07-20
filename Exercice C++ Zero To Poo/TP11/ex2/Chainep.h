#ifndef CHAINEP_H
#define CHAINEP_H
#include <iostream>
using namespace std;
class Chainep
{
    public:
        Chainep();
        Chainep(char*);
        Chainep(const Chainep &);
        virtual ~Chainep();
        int taille() const;
        virtual void affiche() const;
        void ajout(char, int);
        void supp(int);
        Chainep& inv();
        bool appart(char );
        Chainep& operator=(const Chainep &);
        bool operator==(const Chainep &);
        Chainep& operator+(const Chainep &);
        char operator[](int);
        friend ostream& operator<<(ostream &, Chainep& );
        friend istream& operator>>(istream &, Chainep& );
    protected:
        char* adr;
};
#endif // CHAINEP_H
