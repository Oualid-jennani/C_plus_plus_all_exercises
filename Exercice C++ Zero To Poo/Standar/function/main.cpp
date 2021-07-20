#include <iostream>

using namespace std;


void affiche (int a1,int b1)
{
    cout<<a1<<endl;
    cout<<b1<<endl;
}

int somme(int a,int b)
{
    int s;
    s=a+b;
    return s;
}

int main()
{

    int x,y,s;

	cout<<"entrer x et y"<<endl;
	cin>>x>>y;
	affiche(x,y);
	s=somme(x,y);
	cout<<"la somme de "<<x<< " et " <<y<< " est :" <<s<<endl;


    return 0;
}
