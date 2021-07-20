#ifndef TABLE_COL_H
#define TABLE_COL_H
#include "table.h"



class table_col : public table
{
    public:
        table_col(int, char*);
        table_col(const table_col &);

        virtual ~table_col();

        void affiche();

        table_col& operator=(const table &);
        table_col& operator=(const table_col &);

    protected:
    private:
        char *couleur;
};

#endif // TABLE_COL_H
