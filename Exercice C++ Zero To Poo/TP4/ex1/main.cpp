#include <iostream>
#include <string.h>

using namespace std;

struct etudiant{
    char nom[20];
    char prenom[20];
    int age;
    int CNE;
};

void CreerEtudiant(etudiant &);
void AfficherEtudiant(etudiant);
bool egals(etudiant,etudiant);
void ModifierEtudiant(etudiant &);

int main()
{
    etudiant E1,E2,*tabEtudient;

    CreerEtudiant(E1);
    AfficherEtudiant(E1);

    CreerEtudiant(E2);
    AfficherEtudiant(E2);

    bool test = egals(E1,E2);
    if(test){
        cout<<"les caractéristique sont les meme\n";
    }
    else{
        cout<<"les caractéristiques sont differentes\n";
    }



    ModifierEtudiant(E2);
    AfficherEtudiant(E2);


    return 0;
}

void CreerEtudiant ( etudiant &E){
    cout<<"entrez un nouveau etudiant\n";
    cin>>E.nom;
    cin>>E.prenom;
    cin>>E.age;
    cin>>E.CNE;
}

void AfficherEtudiant (etudiant E){
    cout<<"nom : "<<E.nom<<" | prenom : "<<E.prenom<<" | age : "<<E.age<<" | CNE : "<<E.CNE<<endl;
}

bool egals(const etudiant E1,const etudiant E2){
    if(strcmp(E1.nom,E2.nom) == 0 && strcmp(E1.prenom,E2.prenom) == 0 && E1.age == E2.age && E1.CNE == E2.CNE){
        return true;
    }
    else return false;
}

void ModifierEtudiant(etudiant &E){
    cout<<"entrez un nouveau nom\n";
    cin>>E.nom;
    cout<<"entrez un nouveau prenom\n";
    cin>>E.prenom;
    cout<<"entrez un nouveau age\n";
    cin>>E.age;
    cout<<"entrez un nouveau cne\n";
    cin>>E.CNE;
}
