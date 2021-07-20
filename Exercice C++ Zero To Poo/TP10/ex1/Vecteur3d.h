#ifndef VECTEUR3D_H
#define VECTEUR3D_H


class Vecteur3d
{
    public:
        //Vecteur3d();
        //Vecteur3d(float,float,float);
        inline Vecteur3d(float x1 =0,float y1=0,float z1=0);
        void Affiche();

        virtual ~Vecteur3d();
    protected:
    private:
        float x,y,z;
};
Vecteur3d::Vecteur3d(float x1,float y1,float z1 )
{
    x= x1;y=y1;z=z1;
}

#endif // VECTEUR3D_H
