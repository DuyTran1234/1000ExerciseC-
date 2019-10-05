#include <iostream>
using namespace std;
struct toDay
{
	int day;
	int month;
	int year;
};
int main()
{
	struct toDay dcm;
	cout<<"Nhap ngay: ";
	cin>>dcm.day;
	cout<<"Nhap thang: ";
	cin>>dcm.month;
	cout<<"Nhap nam: ";
	cin>>dcm.year;
	cout<<dcm.day<<"/"<<dcm.month<<"/"<<dcm.year<<endl;
}