#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int S = 0;
	int i = 1;
	for( i = 1; i <= 1000; i++)
	{
		S = S + i;
		if(S >= n)
		{
			break;
		}
	}
	cout<<"m lon nhat sao cho S < N la: "<<i-1<<endl;
}