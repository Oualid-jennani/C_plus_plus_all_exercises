#include <iostream>
#include "vecteur3d.h"

using namespace std;

int main()
{
    //---------------------------------------Q1------------------------------------
    //------ par valeur
    vecteur3d v1(1,2,5),v2;

    if(v2.coincide1(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }


/*

    //------ par adresse

    vecteur3d *v1,*v2;
    v1 = new vecteur3d(5,8,9);
    v2 = new vecteur3d();

    if(v2->coincide2(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }

    //------ par référence

    vecteur3d v1(1,2,5),v2;
    if(v2.coincide3(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }
*/

    cout<<"\n\n";

    //---------------------------------------Q2------------------------------------
    //------ par valeur
    cout<<"la vecteur de la grande norme est : ";  v2.norm_max1(v1).GetVecteur();
    //------ par adresse
    cout<<"la vecteur de la grande norme est : ";  v2.norm_max2(v1)->GetVecteur();
    //------ par référence
    cout<<"la vecteur de la grande norme est : ";  v2.norm_max3(v1).GetVecteur();

    cout<<"\n\n";

    //---------------------------------------Q3------------------------------------
    //------ par valeur
    cout<<"l’opposé de vecteur est : ";  v1.vect_oppose1().GetVecteur();
    //------ par adresse
    cout<<"l’opposé de vecteur est : ";  v1.vect_oppose2()->GetVecteur();
    //------ par référence
    cout<<"l’opposé de vecteur est : ";  v1.vect_oppose3().GetVecteur();



    return 0;
}
