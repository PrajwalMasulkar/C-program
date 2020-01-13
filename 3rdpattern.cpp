#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout<<"Enter No. of Columns : ";
	cin>>n;
	
	for(int i=1; i<=n;i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"*";
			
		}	
		cout<<endl;
		
	}
	for(int i=n-1; i>=1;i--)
	{
		for(int j=1;j<=i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
