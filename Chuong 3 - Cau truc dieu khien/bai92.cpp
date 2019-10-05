#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	int UCLN;
	for(int i = 1; i <= a; i++)
	{
		for(int j = 1; j <= b; j++)
		{
			if((a%i==0) && (b%i==0) && (i==j))
			{
				UCLN = i;
			}
		}
	}
	cout<<"Uoc chung lon nhat: "<<UCLN<<endl;
}