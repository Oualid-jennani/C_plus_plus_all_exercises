#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include "Produit.h"


class Multimedia : public Produit
{
    public:
        Multimedia();
        Multimedia(int,char*,float,char*);
        virtual ~Multimedia();

        void affiche();

        Multimedia(const Multimedia &);

        Multimedia& operator=(const Produit &);
        Multimedia& operator=(const Multimedia &);


    protected:
    private:
        char * DureeGarantie;
};

#endif // MULTIMEDIA_H
