#include<iostream>
using namespace std;
int main2() {
	float f1 = 3.1415926f;
	cout << "f1=" << f1 << endl;
	cout << sizeof(f1) << endl;
	double d1=3.1415926;
	cout << "d1=" << d1 << endl;
	cout << sizeof(d1) << endl;
	//科学记数法 
	float f2 = 3e2;
	f2 = 3e-2;
	cout << "f2=" << f2 << endl;
	system("pause");
	return 0;
}

