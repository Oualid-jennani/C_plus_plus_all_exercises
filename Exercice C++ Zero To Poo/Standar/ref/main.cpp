#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int a=5;
	int &ref=a;
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<ref<<endl;
	cout<<&ref<<endl;
	ref++;
	cout<<a<<endl;

    return 0;
}
