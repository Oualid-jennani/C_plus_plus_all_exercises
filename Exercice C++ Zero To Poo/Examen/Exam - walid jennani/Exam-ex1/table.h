#ifndef TABLE_H
#define TABLE_H
#include "point.h"

class table
{
    public:
        table(int =20);
        table(const table &);

        virtual ~table();

        void saisie();
        void affiche();

        table& operator=(const table &);
        bool operator==(const table&);
        table &operator+(table&);

    protected:
        point *TabPoints;
        int taille;
    private:
};

#endif // TABLE_H
