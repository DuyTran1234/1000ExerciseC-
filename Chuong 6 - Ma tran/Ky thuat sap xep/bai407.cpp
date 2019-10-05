#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void sapXepTangDan1Dong(int a[][100], int m, int n);
void swapInteger(int &x, int &y);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	sapXepTangDan1Dong(nArray,mSize,nSize);
	cout<<"Mang sau khi sap xep: "<<endl;
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
void sapXepTangDan1Dong(int a[][100], int m, int n)
{
	int index = 0;
	cout<<"Nhap dong muon sap xep tang dan: ";
	cin>>index;
	for(int j = 0; j < n - 1; j++)
	{
		for(int k = j + 1; k < n; k++)
		{
			if(a[index][j] > a[index][k])
			{
				swapInteger(a[index][j],a[index][k]);
			}
		}
	}
}
void swapInteger(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}