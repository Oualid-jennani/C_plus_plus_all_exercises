#include <iostream>
#include "vecteur3d.h"
#include "Pile.h"

using namespace std;

int main()
{
    vecteur3d v1 , v2("v1",5,2,4);

    v1.Affiche();
    v2.Affiche();


    /*------------------------------------------------------*/
    cout<<"\n\n";
    //------ par valeur
    cout<<"la symétrie de vecteur est : ";  v1.sym_vec1().Affiche();
    //------ par adresse
    cout<<"la symétrie de vecteur est : ";  v1.sym_vec2()->Affiche();
    //------ par référence
    cout<<"la symétrie vecteur est : ";  v1.sym_vec3().Affiche();
    /*------------------------------------------------------*/




    /*------------------------------------------------------*/
    cout<<"\n\n";
    //------ par valeur
    if(v2.coincide1(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }

    //------ par adresse

    vecteur3d *v3,*v4;
    v3 = new vecteur3d("v1",5,8,9);
    v4 = new vecteur3d("v1",5,8,9);

    if(v4->coincide2(v3)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }

    //------ par référence

    if(v2.coincide3(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }

    //------ par référence const

    if(v2.coincide4(v1)){
        cout<<"égalité"<<endl;
    }
    else{
        cout<<"deux obgects different"<<endl;
    }
    /*------------------------------------------------------*/



    /*------------------------------------------------------*/
    cout<<"\n--------------copie------------------\n";
    vecteur3d V10(v1);
    V10.Affiche();
    /*------------------------------------------------------*/



    /*------------------------------------------------------*/
    cout<<"\n\n";
    cout<<"\n--------------les operators------------------\n";
    cout<<"-----------------==-----------------\n";
    if(v2 == v1){
        cout<<"égalité";
    }
    else{
        cout<<"deux obgects different";
    }
    cout<<"\n-----------------=-----------------\n";
    vecteur3d v0;
    v0 = v1;
    v0.Affiche();

    cout<<"----------------->>-----------------\n";
    vecteur3d v12;
    cin>>v12;
    v12.Affiche();
    /*------------------------------------------------------*/




    /*------------------------------------------------------*/
    cout<<"\n--------------operator produit------------------\n";
    cout<<"-----------------*-----------------\n";
    (v12*2).Affiche();
    cout<<"-----------------amie *-----------------\n";
    (2*v12).Affiche();
    /* 10 ==> parce que il retourner meme resultat */
    /*------------------------------------------------------*/





    cout<<"\n\n";
    cout<<"\n------------------pile--------------\n";
    Pile p = Pile(3);

    p.empile(v1);
    p.empile(v2);
    p.empile(v2);

    p.PileAffiche();

    p.depile();
    p.PileAffiche();

    cout<<"\nla taille de pile est :"<<p.donnetaille()<<endl<<endl;

    p.PileAffiche();

    p.empile(v1);
    p.empile(v2);


    /*------------------------------------------------------*/
    Pile p2 = Pile(p);
    p2.PileAffiche();
    /*------------------------------------------------------*/

    /*------------------------------------------------------*/
    Pile p3;
    p3 = p2;
    p3.PileAffiche();
    /*------------------------------------------------------*/


    return 0;
}
