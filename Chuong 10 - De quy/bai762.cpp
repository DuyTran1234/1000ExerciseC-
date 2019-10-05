#include <iostream>
using namespace std;
int kiemTraLe(int n, int &test);
int main()
{
	int n;
	int test = 1;
	cout<<"Nhap n: ";
	cin>>n;
	kiemTraLe(n,test);
	cout<<"Kiem tra toan le: "<<test<<endl;
}
int kiemTraLe(int n, int &test)
{
	if(n / 10 == 0)
	{
		if((n % 10) % 2 == 0)
		{
			test = 0;
		}
	}
	else
	{
		if((n % 10) % 2 == 0)
		{
			test = 0;
		}
		kiemTraLe(n/10,test);
	}
}