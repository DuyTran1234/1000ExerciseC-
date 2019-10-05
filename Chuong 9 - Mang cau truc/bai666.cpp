#include <iostream>
#include <math.h>
using namespace std;
int tongSoMiliGiay(struct TIME a);
void nhap(struct TIME a[], int &n);
void timGio(struct TIME a[], int n);
struct TIME
{
	int gio;
	int phut;
	int giay;
};
int main()
{
	TIME dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	timGio(dcm,mSize);
}
void nhap(struct TIME a[], int &n)
{
	cout<<"Nhap so luong thoi gian can tinh: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		while(true)
		{
			cout<<"Nhap thoi gian "<<i<<": "<<endl;
			cout<<"Gio: ";
			cin>>a[i].gio;
			cout<<"Phut: ";
			cin>>a[i].phut;
			cout<<"Giay: ";
			cin>>a[i].giay;
			if((a[i].gio >= 0 && a[i].gio) <= 23 && (a[i].phut >= 0 && a[i].phut <= 59) &&(a[i].giay >= 0 && a[i].giay <= 59))
			{
				break;
			}
			else
			{
				cout<<"Nhap lai!"<<endl;
			}
		}
	}
}
void timGio(struct TIME a[], int n)
{
	int min = fabs(tongSoMiliGiay(a[0]) - tongSoMiliGiay(a[1]));
	int max = fabs(tongSoMiliGiay(a[0]) - tongSoMiliGiay(a[1]));
	int index1 = 0;
	int index2 = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(fabs(tongSoMiliGiay(a[i]) - tongSoMiliGiay(a[j])) <= min)
			{
				min = fabs(tongSoMiliGiay(a[i]) - tongSoMiliGiay(a[j]));
				index1 = i;
				index2 = j;
			}
		}
	}
	cout<<"Thoi gian gan nhat: "<<index1<<" va "<<index2<<endl;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(fabs(tongSoMiliGiay(a[i]) - tongSoMiliGiay(a[j])) >= max)
			{
				max = fabs(tongSoMiliGiay(a[i]) - tongSoMiliGiay(a[j]));
				index1 = i;
				index2 = j;
			}
		}
	}
	cout<<"Thoi gian xa nhat: "<<index1<<" va "<<index2<<endl;
}
int tongSoMiliGiay(struct TIME a)
{
	return ((a.gio*60 + a.phut)*60 + a.giay)*1000;
}