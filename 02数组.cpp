#include<iostream>

using namespace std;
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "整个数组占用的内存大小:"<<sizeof(arr) << endl;
	cout << "统计"<<sizeof(arr[0]) << endl;
	cout << "地址为:" << arr << endl;
	return 0;
}