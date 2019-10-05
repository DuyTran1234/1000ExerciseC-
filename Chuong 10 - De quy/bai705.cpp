#include <iostream>
using namespace std;
int demDuong(int a[], int i);
int main()
{
	int nArray[1000];
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"] = ";
		cin>>nArray[i];
	}
	cout<<demDuong(nArray,n)<<endl;
}
int demDuong(int a[], int i)
{
	if(i == 0)
	{
		if(a[i] > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(a[i] > 0)
		{
			return 1 + demDuong(a,i - 1);
		}
		else
		{
			return 0 + demDuong(a,i - 1);
		}
	}
}