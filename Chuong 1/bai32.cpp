#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: ";
	cin>>n;
	int dem = 0;
	for(int i = 1; i<= n; i++)
	{
		if(i*i == n)
		{
			dem++;
		}
	}
	if(dem!=0)
	{
		cout<<"n la so chinh phuong"<<endl;
	}
	else
	{
		cout<<"n khong phai la so chinh phuong"<<endl;
	}
}