#include<iostream>
using namespace std;
//编写一个函数模板，计算两个数的平均值。在主函数使用该函数模板时数据类型可以是int，也可以是double。
template<class T>
T average(T x,T y) {
	return  (x + y )/2;
}

int main() {
	int a = 4, b = 2,c;
	double d= 1.8, e = 2.7,f;
	c=average(a, b);
	cout << "a b平均值为:" << c<<endl;
	f = average(d, e);
	cout << "d e平均值为：" << f<<endl;
	return 0;
}