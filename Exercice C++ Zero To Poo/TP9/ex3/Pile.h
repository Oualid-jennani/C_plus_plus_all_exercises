#ifndef PILE_H
#define PILE_H


class Pile
{
    public:
        Pile(int t = 10); //Constructeur qui construit une pile de dimension t (10 par defaut)
        virtual ~Pile();

        void empile(int); //empile n en haut de la pile
        void depile(); //depile le sommet de la pile
        bool vide() const; //teste si la pile est vide
        bool pleine() const; //teste si la pile est pleine
        int donnetaille() const; //renvoie la taille de la pile
        void PileAffiche() const;


    protected:
    private:
        int dim;
        int taille;
        int *adr;
};

#endif // PILE_H
