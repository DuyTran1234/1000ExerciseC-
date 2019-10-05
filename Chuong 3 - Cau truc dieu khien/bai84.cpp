#include <iostream>
using namespace std;
int main()
{
	cout<<"GIAI PT AX + B"<<endl;
	cout<<"Nhap a: ";
	int a,b;
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	if(a==0)
	{
		if(b==0)
		{
			cout<<"PT Vo So Nghiem"<<endl;
		}
		else if(b!=0)
		{
			cout<<"PT vo nghiem"<<endl;
		}
	}
	else if(a!=0)
	{
		cout<<"Nghiem cua pt x = "<<-b/static_cast<double>(a)<<endl;
	}
}