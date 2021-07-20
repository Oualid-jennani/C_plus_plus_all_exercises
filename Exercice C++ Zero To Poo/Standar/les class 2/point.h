#ifndef POINT_H
#define POINT_H


class point
{
    public:
        point();
        virtual ~point();

        void saisie();
        void affiche();
        void translate(float,float);
        static void afficheNbr();


    protected:

    private:
        float x;
        float y;
        static int nbrPoint;
};

#endif // POINT_H
