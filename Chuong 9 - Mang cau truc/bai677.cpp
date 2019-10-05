#include <iostream>
using namespace std;
struct LOPHOC
{
	char tenLop[30];
	short siSo;
};
int main()
{
	LOPHOC nArray[1000];
	int mSize;
	
}
void nhap(struct LOPHOC a[], int &n)
{
	cout<<"Nhap so luong lop hoc: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"LOP HOC "<<i<<": "<<endl;
		cout<<"Nhap ten lop: ";
		cin.getline(a[i].tenLop,30);
		cout<<"Nhap si so: ";
		cin>>a[i].siSo;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct LOPHOC a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"LOP HOC "<<i<<": "<<endl;
		cout<<"Ten lop: "<<a[i].tenLop<<endl;
		cout<<"Si so: "<<a[i].siSo<<endl;
	}
}
int siSoMax(struct LOPHOC a[], int n)
{
	int max = a[0].siSo;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].siSo >= max)
		{
			max = a[i].siSo;
			index = i;
		}
	}
	return index;
}
