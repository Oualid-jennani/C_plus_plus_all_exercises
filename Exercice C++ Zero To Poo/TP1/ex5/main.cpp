#include <iostream>
#include <math.h>


using namespace std;



void saisie(float&,float&,float&);




int main()
{

    float A,B,C,D,x,y,z;


    saisie(&A,&B,&C);


    cout<<"resoudre:\n";
    cout<<A<<"X2+"<<B<<"X+"<<C<<"=0\n\n\n";
    cout<<"		calcul du discriminant... \n";


    D = B * B - 4 * A * C;
    cout<<"le discriminent est egal a:"<<D<<"\n\n\n";
    cout<<"		recherche des solutions...\n\n";


    if ( A == 0)
    {
        float w =  ( -  C ) / B;
        cout<<"la solution est:  "<<w<<"\n";
    }

    if ( D > 0 )
	{
        float d = sqrt(D) ;
		float z = ( B - d ) / ( 2 * A );
		float y = ( B + d ) / ( 2 * A );
        cout<<"les deux solutions sont:          "<<z<<"  et   "<<y<<"\n";
	}

    if (D == 0)
	{
		float x = B / 2 * A;
		cout<<"la solution est une racine double et de valeur  "<<x<<"\n";
	}
	return 0;

}

void saisie(float*a,*b,*c){

    cout<<"entrer la valeur de A\n";
    cin>>&a;
    cout<<"\nentrer la valeur de B\n";
    cin>>&b;
    cout<<"\nentrer la valeur de C\n";
    cin>>&c;

}

