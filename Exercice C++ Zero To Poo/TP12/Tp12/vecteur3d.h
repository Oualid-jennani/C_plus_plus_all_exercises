#ifndef VECTEUR3D_H
#define VECTEUR3D_H

#include <iostream>

using namespace std;

class vecteur3d
{
    public:
        vecteur3d();
        virtual ~vecteur3d();
        vecteur3d(char*,float,float,float);
        //inline vecteur3d(char *Nom1 ="V-aleatoire",float x1 =0,float y1=0,float z1=0);
        void Affiche()const;

        vecteur3d sym_vec1();
        vecteur3d *sym_vec2();
        vecteur3d &sym_vec3();

        bool coincide1(vecteur3d);
        bool coincide2(vecteur3d *);
        bool coincide3(vecteur3d &);
        bool coincide4(vecteur3d &)const;

        vecteur3d(const vecteur3d &v);


        bool operator==(const vecteur3d&);
        vecteur3d& operator=(const vecteur3d &);
        friend istream& operator>>(istream &, vecteur3d&);

        vecteur3d &operator*(float );
        friend vecteur3d&operator*(float, vecteur3d&);


    protected:

    private:
        char *Nom;
        float x, y, z;
};
/*
vecteur3d::vecteur3d(char *Nom1,float x1,float y1,float z1 )
{
    this->Nom = new char;
    this->Nom = Nom1;
    x= x1;y=y1;z=z1;
}
*/
#endif // VECTEUR3D_H
