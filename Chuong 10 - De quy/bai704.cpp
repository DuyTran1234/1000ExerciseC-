#include <iostream>
using namespace std;
int tongSoChan(int a[], int i);
int main()
{
	int nArray[1000];
	int n = 0;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"] = ";
		cin>>nArray[i];
	}
	cout<<tongSoChan(nArray,n)<<endl;
}
int tongSoChan(int a[], int i)
{
	if(i == 0)
	{
		if(a[i] % 2 == 0)
		{
			return a[i];
		}
		else
		{
			return 0;
		}
	}	
	else
	{
		if(a[i] % 2 == 0)
		{
			return a[i] + tongSoChan(a, i - 1);
		}
		else
		{
			return 0 + tongSoChan(a, i - 1);
		}	
	}
}