#include <iostream>
using namespace std;
void swap(int a[]) {
	int temp;
	for (int i = 0; i < 5-1; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int main() {
	int* a;
	a = new int[5];
	cout << "请输入数组数值：";
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}
	swap(a);
	for (int i = 0; i < 5; i++) {
		cout << a[i];
	}
}
//冒泡排序法
//for(int i=0;i<n-1;i++){for(int j=0;j<n-i-1;j++)} 
