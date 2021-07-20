#ifndef POINT_H
#define POINT_H
#include <iostream>

using namespace std;
class point
{
    public:
        point();
        virtual ~point();

        inline void translate(float dx, float dy);

        void saisie();

        void affiche()
        {
            cout<<"x = "<<x<<"   y = "<<y<<endl;
        }

        static void afficheNbr();


    protected:

    private:
        float x;
        float y;
        static int nbrPoint;
};

void point::translate(float dx, float dy)
{
    x+=dx;
    y+=dy;
}

#endif // POINT_H
