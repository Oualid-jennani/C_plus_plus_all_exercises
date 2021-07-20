#include <iostream>

using namespace std;

int main()
{


    int N, M;
    int *PN,*PM;

    cout<<"tappez taille de matrice M et N "<<endl;
    cout<<"==> N "<<endl;
    cin>>N;
    cout<<"==> M "<<endl;
    cin>>M;

    int A[N][M];

    int *a= (int *)A;

    for(PN=a;PN<a+N;PN++){

        for(PM=a+((PN-a)*M);PM<a+((PN-a)*M)+M;PM++){

            cout<<"Element "<<PN-a+1<<" "<<PM-(a+(PN-a)*N)+1<<endl;

            cin>>*PM;

        }

    }

    for(PN=a;PN<a+N;PN ++){

        for(PM=a+((PN-a)*N);PM<a+((PN-a)*N)+M;PM++){

            cout<<"|"<<*PM;

        }
        cout<<"|\n";

    }



    return 0;
}
