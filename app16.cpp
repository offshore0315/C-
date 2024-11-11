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
			cout << "数值较大的为" << a<<endl;
}
		else
			cout << "数值较大的为" << b<<endl;
	}
		void Min() {
			if (a < b) {
				cout << "数值较小的为" << a<<endl;
	}
			else
				cout << "数值较小的为" << b<<endl;
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