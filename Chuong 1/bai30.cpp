#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int Tong = 0;
	for(int i =1; i<n ;i++)
	{
		if(n%i==0)
		{
			Tong = Tong + i;
		}
	}
	if(Tong == n)
	{
		cout<<"La so hoan hao!!"<<endl;
	}
	else
	{
		cout<<"Khong phai so hoan hao!!"<<endl;
	}
}