#ifndef COMPTE_H
#define COMPTE_H


class compte
{
    public:
        compte();
        virtual ~compte();



        void initialisation();
        void retrait(float);
        void depot(float);
        void consultation();




    protected:
    private:
        int numero;
        char nom[20];
        float solde;
};

#endif // COMPTE_H
