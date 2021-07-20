#ifndef BANQUE_H
#define BANQUE_H
#include "compte.h"



class banque
{
    public:
        banque();
        virtual ~banque();

        compte tabC[100];
        void add(compte);
        static int nbrC;

    protected:
    private:

};

#endif // BANQUE_H
