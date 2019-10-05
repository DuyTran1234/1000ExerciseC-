#include <iostream>
using namespace std;
int main()
{
	int nMonth;
	do
	{
		cout<<"Nhap thang: ";
		cin>>nMonth;
	}while(nMonth <= 0 || nMonth > 12);
	
	
	if(nMonth <= 3 && nMonth >= 1 )
	{
		cout<<"Quy I"<<endl;
	}
	else if(nMonth <= 6 && nMonth >= 4 )
	{
		cout<<"Quy II"<<endl;
	}
	else if(nMonth <= 9 && nMonth >= 7 )
	{
		cout<<"Quy III"<<endl;
	}
	else if(nMonth <= 12 && nMonth >= 10 )
	{
		cout<<"Quy IV"<<endl;
	}
}