#include <iostream>

using namespace std;

int main()
{
    int n,f,i;
    cout << "saisir n"<< endl;
    cin>>n;
     f=1;
    for (i=1;i<=n;i++)
    f=f*i;

     cout<<"le factoriel est:"<<f<<endl;


    return 0;
}
