#include<iostream>
using namespace std;
//��дһ������ģ�壬������������ƽ��ֵ����������ʹ�øú���ģ��ʱ�������Ϳ�����int��Ҳ������double��
template<class T>
T average(T x,T y) {
	return  (x + y )/2;
}

int main() {
	int a = 4, b = 2,c;
	double d= 1.8, e = 2.7,f;
	c=average(a, b);
	cout << "a bƽ��ֵΪ:" << c<<endl;
	f = average(d, e);
	cout << "d eƽ��ֵΪ��" << f<<endl;
	return 0;
}