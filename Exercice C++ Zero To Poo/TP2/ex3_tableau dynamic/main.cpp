#include <iostream>

using namespace std;

int main()
{
    int M, N,i,j;
    int **A;

    cout<<"entrez le nombre de ligne et de colonnes\n";
    cin>>N>>M;


    A= new int*[N];

    for (i = 0; i < N;i++)
        A[i] = new int[M];


    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            cout<<"Entrez A["<<i<<"]["<<j<<"]";
            cin>>A[i][j];
        }
    }

    for(i=0;i<N;i++){

        cout<<"|";
        for(j=0;j<M;j++){
            cout<<A[i][j]<<"|";
        }
        cout<<endl;

    }


    for (i = 0; i < N; i++)
        delete [] A[i];
    delete [] A;



    return 0;
}
