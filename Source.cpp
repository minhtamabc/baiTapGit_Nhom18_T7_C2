#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+B;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b){
	if(b == 0)
		return -1;
	return a/b;
}
int main()
{
	int a = 10, b = 2;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
	cout<<"Tong ="<<tong(a,b);
	cout<<"Hieu ="<<hieu(a,b);
	cout<<"Tich ="<<tich(a,b);
	cout<<"Thuong ="<<thuong(a,b);
	system("pause");
	return 0;
}