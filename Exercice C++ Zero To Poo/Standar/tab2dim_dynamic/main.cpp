#include <iostream>

using namespace std;

int main()
{

    int M, N,i,j;
    int **A,**B;

    cout<<"entrez le nombre de ligne et de colonnes\n";
    cin>>M>>N;


    A= new int*[M];

    for (i = 0; i < M;i++)
        A[i] = new int[N];


    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cout<<"Entrez A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }

    for(i=0;i<M;i++){

        cout<<"|";
        for(j=0;j<N;j++){
            cout<<A[i][j]<<"|";
        }
        cout<<endl;

    }


    B= new int*[N];

    for (i = 0; i < N;i++)
        B[i] = new int[M];

    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            B[i][j]=A[j][i];
        }
    }


    cout<<"\n\n";
    for(i=0;i<N;i++){

        cout<<"|";
        for(j=0;j<M;j++){
            cout<<B[i][j]<<"|";
        }
        cout<<endl;
    }




    for (i = 0; i < M; i++)
        delete [] A[i];
    delete [] A;


    for (i = 0; i < N; i++)
        delete [] B[i];
    delete [] B;


    return 0;
}
