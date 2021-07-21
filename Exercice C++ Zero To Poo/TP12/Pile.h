#ifndef PILE_H
#define PILE_H
#include "vecteur3d.h"

class Pile
{
    public:
        Pile(int t = 10); //Constructeur qui construit une pile de dimension t (10 par defaut)
        virtual ~Pile();

        void empile(vecteur3d); //empile n en haut de la pile
        void depile(); //depile le sommet de la pile
        bool vide() const; //teste si la pile est vide
        bool pleine() const; //teste si la pile est pleine
        int donnetaille() const; //renvoie la taille de la pile
        void PileAffiche() const;
        Pile(const Pile &);//constructeur par recopie
        Pile& operator=(const Pile &); // surcharge de l’operateur d’affectation




    protected:
    private:
        int dim;
        int taille;
        vecteur3d *adr;
};

#endif // PILE_H
