#include<iostream>
using namespace std;

class CNum {
	int real;
	int image;
public:
	CNum(int m, int n);
	void show();
	friend int Add(CNum n1,CNum n2);
};
CNum::CNum(int m, int n) {
	real=m;
	image=n;
}
void CNum::show() {
	cout << "该复数实部为：" << real<<endl;
	cout << "该复数虚部为：" << image<<endl;
}

int Add(CNum n1, CNum n2) {
	cout << "两复数相加实部为：" << (n1.real + n2.real) << endl;
	cout << "两复数相加虚部为：" <<( n1.image+ n2.image) <<endl;
	return 0;
}

int main() {
	CNum c1(2,3), c2(4,5);
	c1.show();
	c2.show();
	Add(c1, c2);
}