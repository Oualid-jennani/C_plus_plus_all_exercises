#include <iostream>
#include <string.h>


using namespace std;

int main()
{



    char **tabMot;
    int i,N;

    cout<<"Entrez le nombre de mots\n";
    cin>>N;

    tabMot = new char*[N];
    for (i = 0; i < N;i++){
        tabMot[i] = new char[50];
        cout<<"Entrez un mot"<<endl;
        cin>>tabMot[i];
    }

    cout<<"\n\nles mots\n\n";
    for (i = 0; i < N;i++)
        cout<<tabMot[i]<<endl;

    //tri

    bool tri;
    do{
        tri = true;
        for (i = 0; i < N-1;i++){

            if(strcmp(tabMot[i], tabMot[i+1]) > 0){
                char *tempTab;
                tempTab = new char[50];

                strcpy(tempTab, tabMot[i]);
                strcpy(tabMot[i],tabMot[i+1]);
                strcpy(tabMot[i+1], tempTab);


                tri = false;
                delete []tempTab;
            }

        }
    }while(tri == false);





    cout<<"\n\nles mots tri\n\n";
    for (i = 0; i < N;i++)
        cout<<tabMot[i]<<endl;



    for (i = 0; i < N; i++)
        delete []tabMot[i];

    delete []tabMot;



    return 0;
}
