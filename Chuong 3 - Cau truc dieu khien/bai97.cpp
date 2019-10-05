#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Nhap canh a: ";
	cin>>a;
	cout<<"Nhap canh b: ";
	cin>>b;
	cout<<"Nhap canh c: ";
	cin>>c;
	if( (a < b + c)  || (b < a + c) || (c < a + b) )
	{
		if( (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == b*b + a*a) )
		{
			cout<<"La tam giac vuong"<<endl;
		}
		else if(a=b=c)
		{
			cout<<"La tam giac deu"<<endl;
		}
		else if( (a==b) || (a==c) || (c==a) || (b==c) )
		{
			cout<<"La tam giac can"<<endl;
		}
		else 
		{
			cout<<"La tam giac thuong"<<endl;
		}
	}
	else 
	{
		cout<<"Khong phai la tam giac"<<endl;
	}
}