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
bool isSNT(int a){
	if(a < 2)
		return 2;
	for(int i = 0; i <= sqrt(a); i++){
		if(a%i == 0)
			return false;
	}
	return true;
}
int main()
{
	int a = 10, b = 2;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT\n";
	cout<<"Tong ="<<tong(a,b);
	cout<<"Hieu ="<<hieu(a,b);
	cout<<"Tich ="<<tich(a,b);
	cout<<"Thuong ="<<thuong(a,b);
	cout<<"nhanh 1";
	cout<<"ket thuc nhanh 1";
	cout<<"Nhanh 2";
	cout<<"ket thuc nhanh 2";
	system("pause");
	return 0;
}