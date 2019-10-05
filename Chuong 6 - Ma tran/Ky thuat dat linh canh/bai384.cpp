#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void tachSo(int a[][100], int b[1000], int m, int n, int &dem);
int chuSoXuatHienNhieuNhat(int b[1000], int dem);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	int mArray[1000];
	int dem = 0;
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	tachSo(nArray, mArray, mSize, nSize, dem);
	cout<<chuSoXuatHienNhieuNhat(mArray, dem)<<endl;
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
void tachSo(int a[][100], int b[1000], int m, int n, int &dem)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			int varCopy = a[i][j];
			while(varCopy != 0)
			{
				int nMem = varCopy % 10;
				b[dem] = nMem;
				dem++;
				varCopy = varCopy / 10;
			}
		}
	}
}
int chuSoXuatHienNhieuNhat(int b[1000], int dem)
{
	int max = 0;
	int maxIndex = 0;
	for(int i = 0; i < dem; i++)
	{
		int index = b[i];
		int count = 0;
		for(int j = 0; j < dem; j++)
		{
			if(b[j] == index)
			{
				count++;
			}
		}
		if(count > max)
		{
			max = count;
			maxIndex = b[i];
		}
	}
	return maxIndex;
}