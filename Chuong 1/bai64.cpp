#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"PT Ax + B = 0"<<endl;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	if(a == 0)
	{
		if(b==0)
		{
			cout<<"PT vo so nghiem"<<endl;
		}
		else if(b!=0)
		{
			cout<<"PT vo nghiem"<<endl;
		}
	}
	else if(a != 0)
	{
		cout<<"x1 = "<<(-b/static_cast<double>(a))<<endl;
	}
}