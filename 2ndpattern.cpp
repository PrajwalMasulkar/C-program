#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,k=1;
	cout<<"Enter Number of Rows :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
		 	cout<<k<<" " ;
		 	k++;
		}
		cout<<endl;
	}
	
	return 0;
}
