#include<iostream>
using namespace std;
template <class T>
class Compater {
	T a;
	T b;
public:
	Compater(T x,T y) {
		a = x;
		b = y;
	}
	void Max() {
		if (a > b) {
			cout << "��ֵ�ϴ��Ϊ" << a<<endl;
}
		else
			cout << "��ֵ�ϴ��Ϊ" << b<<endl;
	}
		void Min() {
			if (a < b) {
				cout << "��ֵ��С��Ϊ" << a<<endl;
	}
			else
				cout << "��ֵ��С��Ϊ" << b<<endl;
	}
};


int main() {
	Compater<int>C1(1, 2);
	C1.Max();
	C1.Min();
	Compater<double>C2(1.1, 2.2);
	C2.Max();
	C2.Min();
	return 0;
}