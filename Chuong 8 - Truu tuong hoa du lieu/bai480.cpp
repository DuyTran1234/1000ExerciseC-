#include <iostream>
using namespace std;
struct Px
{
	int a[100];
	int n;
};
int main()
{
	struct Px dcm;
	cout<<"Nhap n: ";
	cin>>dcm.n;
	for(int i = dcm.n; i >= 0; i--)
	{
		cout<<"Nhap a"<<i<<" : ";
		cin>>dcm.a[i];
	}	
	cout<<"P(x) = ";
	for(int i = dcm.n; i >= 0; i--)
	{
		if(i == 0)
		{
			cout<<dcm.a[i]<<endl;
		}
		else if(i == 1)
		{
			cout<<dcm.a[i]<<"x + ";
		}
		else
		{
			cout<<dcm.a[i]<<"x^"<<i<<" + ";
		}
	}
}