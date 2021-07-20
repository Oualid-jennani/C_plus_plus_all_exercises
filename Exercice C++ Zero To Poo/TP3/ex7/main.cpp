#include <iostream>
#include <math.h>

using namespace std;

void saisie(float&,float&, float&);
void calcul(float&,float&, float&);

int main()
{
    float A,B,C;

    saisie(A,B,C);

    cout<<"resoudre:\n";
    cout<<A<<"X^2 + "<<B<<"X + "<<C<<" = 0\n\n\n";

    calcul(A,B,C);


    return 0;
}






void saisie(float &a,float &b, float &c){
    cout<<"entrer la valeur de A\n";
    cin>>a;
    cout<<"\nentrer la valeur de B\n";
    cin>>b;
    cout<<"\nentrer la valeur de C\n";
    cin>>b;
}

void calcul(float &a,float &b, float &c){
    float D,x,y,z;

    cout<<"		calcul du discriminant... \n";
    D = b * b - 4 * a * c;
    cout<<"le discriminent est egal a:"<<D<<"\n\n\n";
    cout<<"		recherche des solutions...\n\n";


    if ( a == 0)
    {
        float w =  ( -  c ) / b;
        cout<<"la solution est:  "<<w<<"\n";
    }

    if ( D > 0 )
	{
        float d = sqrt(D) ;
		float z = ( b - d ) / ( 2 * a );
		float y = ( b + d ) / ( 2 * a );
        cout<<"les deux solutions sont:          "<<z<<"  et   "<<y<<"\n";
	}

    if (D == 0)
	{
		float x = b / 2 * a;
		cout<<"la solution est une racine double et de valeur  "<<x<<"\n";
	}
}














