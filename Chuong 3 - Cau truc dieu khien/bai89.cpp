#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int S = 0;
	for(int i = 0; i < n; i++)
	{
		if(i%2!=0)
		{
			S = S + i;
		}
	}
	cout<<"S = "<<S<<endl;
}