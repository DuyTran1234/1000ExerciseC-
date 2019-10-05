#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int giaTriXuatHienMax(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<giaTriXuatHienMax(nArray,mSize,nSize)<<endl;
}
void nhapMang(int a[][100], int &m, int &n)
{
	cout<<"Nhap so hang: ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][100], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
}
int giaTriXuatHienMax(int a[][100], int m, int n)
{
	int c[100];
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			c[dem] = a[i][j];
			dem++;
		}
	}
	int max = 0;
	int maxIndex = 0;
	for(int i = 0; i < dem; i++)
	{
		int index = c[i];
		int count = 0;
		for(int j = 0; j < dem; j++)
		{
			if(c[j] == index)
			{
				count++;
			}
		}
		if(count > max)
		{
			max = count;
			maxIndex = i;
		}
	}
	return c[maxIndex];
}