#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanVi(int &x, int &y);
void sapXepMaTran(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	sapXepMaTran(nArray,mSize,nSize);
	cout<<"Ma tran sau khi sap xep: "<<endl;
	xuatMang(nArray,mSize,nSize);
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
void sapXepMaTran(int a[][100], int m, int n)
{
	for(int j = 0; j < n; j++)
	{
		if(j % 2 == 0)
		{
			for(int i = 0; i < m - 1; i++)
			{
				for(int k = i + 1; k < m; k++)
				{
					if(a[i][j] < a[k][j])
					{
						hoanVi(a[i][j], a[k][j]);
					}
				}
			}
		}
		else if(j % 2 != 0)
		{
			for(int i = 0; i < m - 1; i++)
			{
				for(int k = i + 1; k < m; k++)
				{
					if(a[i][j] > a[k][j])
					{
						hoanVi(a[i][j], a[k][j]);
					}
				}
			}
		}
	}
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}