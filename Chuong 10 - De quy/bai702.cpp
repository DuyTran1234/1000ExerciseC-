#include <iostream>
using namespace std;
int giaiThua(int n);
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	cout<<giaiThua(n)<<endl;
}
int giaiThua(int n)
{
	if(n == 1)
	{
		return 1;
	}
	else
	{
		return n + giaiThua(n - 1);
	}
}