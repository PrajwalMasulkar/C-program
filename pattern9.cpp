#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if((i==1) || (i==n) || (j==1) || (j==n));
			  cout<<"*";
			else
			cout<<" ";
			
			
		}
		cout<<"\n";
	}
	
	return 0;
}
