#include <iostream>
using namespace std;
int main()
{
	int k,n;
	cout<<"Nhap n: ";
	cin>>n;
	int S = 0;
	int i = 1;
	while(S<n)
	{
		k = i;
		i++;
		S = S + i;
		
	}
	cout<<"k = "<<k<<endl;
}