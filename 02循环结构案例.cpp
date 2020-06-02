#include<iostream>
#include<ctime>
using namespace std;
int main757974() {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	cout << num << endl;
	num = rand();
	cout << num << endl;
	return 0;
}