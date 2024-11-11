#include<iostream>
using namespace std;

class CString {
	int height;
	int weight;
public :
	void Setscore(int m, int n);
	void Getsquare();
	void Getlength();
};
void CString::Setscore(int m, int n) {
	height = m;
	weight = n;
}

void CString::Getsquare() {
	int square = height*weight;
	cout << "矩形面积为:" << square<<endl;
}

void CString::Getlength() {
	int length = (height + weight) * 2;
	cout << "矩形周长为:" << length<<endl;
}

int main() {
	CString c1, c2;
	c1.Setscore(10, 20);
	c2.Setscore(20, 40);
	c1.Getsquare();
	c1.Getlength();
	c2.Getsquare();
	c2.Getlength();
	system("pause");
	return 0;
}