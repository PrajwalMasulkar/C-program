#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n;
	cout<<"Enter Number of Rows : ";
	cin>>n;
	
	for(int i=1, k=0;i<=n;i++,k=0)
	{
		for(int s=1; s<=(n-i);s++)
		{
			cout<<" ";
		}
		while( k != (2*i)-1 )
		{
			cout<<"*";
			k++;
		}
		cout<<endl; 
	}
	
	return 0;
}
