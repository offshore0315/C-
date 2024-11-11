#include<iostream>
using namespace std;
class CString {
protected:
	int x;
	int y;
	int z;
public:
	CString(int a1,int a2,int a3) {
		x = a1;
		y = a2;
		z = a3;
	}
	CString(){}
    CString operator +(CString c) {
		CString c1;
		c1.x = this->x + c.x;
		c1.y = this->y + c.y;
		c1.z = this->z + c.z;
		return c1;
	}
	void show() {
		cout << "x:" << this->x << endl;
		cout << "y:" << this->y << endl;
		cout << "z:" << this->z << endl;
	}
	friend CString operator - (CString c1, CString c2);
};
CString operator -(CString c2, CString c1){
	CString c5;
	c5.x = c2.x - c1.x;
	c5.y = c2.y - c1.y;
	c5.z = c2.z - c1.z;
	return c5;
}
int main() {
	CString c1(1,2,3), c2(4,5,6),c3,c4,c5,c6;
	c3 = c1.operator+(c2);
	c3.show();
	c4 = c1 + c2;
	c4.show();
	c5 = c2 - c1;
	c5.show();
	c6 = operator -(c2, c1);
	c6.show();
}
