#include <iostream>
#include <string.h>

using namespace std;
    class personne{
        private:
        char nom[20];
        char prenom[20];

        public :
        void modifier(char*,char*);
        void saisir();
        void afichier();
    };

    void personne::modifier(char *nom1,char *prenom1){
        strcpy(nom,nom1);
        strcpy(prenom,prenom1);
    }

    void personne::saisir(){
        cout<<"Tapez le nom et prenom :"<<endl;
        cin>>this->nom;
        cin>>this->prenom;
    }

    void personne::afichier(){
        cout<<"le nom est : "<<this->nom<<"----- le prenom est : "<<this->prenom;
    }

int main()
{
    personne p;
    personne *p2;
    p2 = new personne;

    p.saisir();
    p.afichier();

    p.modifier("safae","mimoni");
    cout << "apres modefication" << endl;
    p.afichier();

    //---------------------------
    cout<<"\n\n\n";
    p2->saisir();
    p2->afichier();

    p2->modifier("safae","mimoni");
    cout << "apres modefication" << endl;
    p2->afichier();

    delete p2;

    return 0;
}
