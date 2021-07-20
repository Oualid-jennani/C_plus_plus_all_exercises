#include <iostream>

using namespace std;

int main()
{
    int T[50];
    int N,X,j;

    cout<<"tappez taille de tableau N Max 50"<<endl;
    cin>>N;

    for (int i=0; i<N; i++)
    {
        cout<<"Element T["<<i<<"]"<<endl;
        cin>>T[i];
    }

    cout<<"Tapez l'élément X à éliminer du tableau : "<<endl;
    cin>>X;




/*
    for (int i=0; i<N; i++)
    {
        if (T[i] == X)
        {
            for (int j=i; j<N-1; j++)
            {
                T[j]=T[j+1];
            }
            N--;
            break;
        }

    }
*/
/*
    for (int i=j=0; i<N; i++)
    {
        T[j] = T[i];
        if (T[i] != X)
            j++;
    }

    //N=j;
*/


    for (int i=0; i<N; i++)
    {
        if (T[i] == X)
        {

            i++;
            j=i;
            do{
                T[j] = T[i];
                if (T[i] != X)j++;

                i++;
            }while(i<N);



/*
            j=i+1;
            for (int k=i+1;k<N; k++)
            {
                T[j] = T[k];
                if (T[k] != X)
                    j++;
            }
        */
            break;

        }

    }
    N=j;
/*
    int posX =0;
    for (int i=0; i<N; i++)
    {
        if (T[i] == X)
        {
            posX=i;
            break;
        }

    }

    for (int i=j=posX+1; i<N; i++)
    {
        T[j] = T[i];
        if (T[i] != X)
            j++;
    }

*/



    for (int i=0; i<N; i++)
        cout<<"|"<<T[i];
    cout<<"|\n";
    return 0;
}
