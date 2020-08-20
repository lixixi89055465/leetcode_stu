#include<iostream>

using namespace std;
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ�õ��ڴ��С:"<<sizeof(arr) << endl;
	cout << "ͳ��"<<sizeof(arr[0]) << endl;
	cout << "��ַΪ:" << arr << endl;
	int arrs[2][3] = { {1,2,3},{4,5,6} };
	cout << arrs << endl;
	cout << arrs[0] << endl;
	cout << &arrs[0][0] << endl;
	return 0;
}