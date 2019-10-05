#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanViHaiCot(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	hoanViHaiCot(nArray,mSize,nSize);
	cout<<"Ma tran sau khi hoan doi: "<<endl;
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
void hoanViHaiCot(int a[][100], int m, int n)
{
	cout<<"Nhap 2 cot can hoan vi: "<<endl;
	int x = 0;
	int y = 0;
	cout<<"Cot 1: ";
	cin>>x;
	cout<<"Cot 2: ";
	cin>>y;
	for(int i = 0; i < m; i++)
	{
		int temp = a[i][x];
		a[i][x] = a[i][y];
		a[i][y] = temp;
	}
}