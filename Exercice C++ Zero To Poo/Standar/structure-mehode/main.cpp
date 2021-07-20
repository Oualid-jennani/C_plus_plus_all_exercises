#include <iostream>
#include <string.h>

using namespace std;
struct personne{

    char nom[20] ;
    char prenom[20];

    void modifier(char*,char*);

    };

    void personne::modifier(char *nom1,char *prenom1){
        strcpy(nom,nom1);
        strcpy(prenom,prenom1);
    }

    void saisir(personne &p){
        cout<<"Tapez le nom et prenom :"<<endl;
        cin>>p.nom;
        cin>>p.prenom;
    }

    void afichier(personne p){
        cout<<"le nom est : "<<p.nom<<"----- le prenom est : "<<p.prenom;
    }

int main()
{
    personne p;

    saisir(p);
    afichier(p);


    p.modifier("safae","mimoni");
    cout << "apres modefication" << endl;
    afichier(p);



    return 0;
}
