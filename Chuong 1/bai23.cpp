#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	cout<<"So luong cac uoc n: "<<dem<<endl;
}