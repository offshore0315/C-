#include<iostream>
using namespace std;

class CString {
	int height;
	int weight;
public:
	CString(int m, int n);
	void Getsquare();
	void Getlength();
    
	CString(const CString& other) {
		height = other.height;
		weight = other.weight;
		cout << "�������캯����ʹ�ã�" << endl;
	}
};
CString::CString(int m, int n) {
	cout << "���캯����ʹ�ã�" << endl;
	height = m;
	weight = n;
}

void CString::Getsquare() {
	int square = height * weight;
	cout << "�������Ϊ:" << square << endl;
}

void CString::Getlength() {
	int length = (height + weight) * 2;
	cout << "�����ܳ�Ϊ:" << length << endl;
}
int main() {
	CString c1(10, 20), c2(20, 40);
	CString c3 = c1;
	CString c4(c2);
	c1.Getsquare();
	c1.Getlength();
	c2.Getsquare();
	c2.Getlength();
	c3.Getsquare();
	c3.Getlength();
	c4.Getsquare();
	c4.Getlength();
	system("pause");
	return 0;
}