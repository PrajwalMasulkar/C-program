#include <iostream>

using namespace std;


int main()
{
	int i;
	cout<<"Enter value 10,15 or something"<<endl;
	cin>>i;
	switch(i)
	{
		case 10 : cout<<"Value is 10";
		break;
		case 15 : cout<<"value is 15";
		break;
		default: cout<<"Not Found";
	}
	return 0;
		
}
