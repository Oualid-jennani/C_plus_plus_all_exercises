#ifndef VECTEUR3D_H
#define VECTEUR3D_H
#include <iostream>

using namespace std;

class vecteur3d
{
    public:

        virtual ~vecteur3d();

        vecteur3d (float c1=0.0, float c2=0.0, float c3=0.0)
        {
            x=c1; y=c2; z=c3;
        }

        bool coincide1(vecteur3d);
        bool coincide2(vecteur3d *);
        bool coincide3(vecteur3d &);

        vecteur3d norm_max1(vecteur3d);
        vecteur3d *norm_max2(vecteur3d);
        vecteur3d &norm_max3(vecteur3d);

        vecteur3d vect_oppose1();
        vecteur3d *vect_oppose2();
        vecteur3d &vect_oppose3();

        void GetVecteur();


    protected:
    private:
        float x, y, z;

};

#endif // VECTEUR3D_H
