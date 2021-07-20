#ifndef PRODUIT_H
#define PRODUIT_H


class Produit
{
    public:
        Produit();
        Produit(int,char*,float);
        virtual ~Produit();
        Produit(const Produit &);

        Produit& operator=(const Produit &);

        void affiche();
        void PrixTTC();

    protected:
        int ref;
        char *nom;
        float pht;
    private:

};

#endif // PRODUIT_H
