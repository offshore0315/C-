#include<iostream>

using namespace std;

class CString {

protected:

	int length;

	int width;

public:

	CString(int m,int n) {

		length = m;

		width = n;

	}

	int CSquare() {

		int square = length * width;

		cout << "�þ��ε����Ϊ:"<<square << endl;

		return 0;

	}

	int CPerimeter() {

		int perimeter = (length + width) * 2;

		cout << "�þ��ε��ܳ�Ϊ:"<<perimeter<<endl;

		return 0;

	}

};

class CPoint

{

public:

	int a=1;

	int b=2;

	int c=3;



	CPoint(int i,int v,int l) {

		i = a;

		v = b;

		l = c;

		cout << "�ó���������ĵ�����Ϊ��" <<"("<<i<<","<<v<<","<<l<<")" << endl;

	}

};

class Cubois :public CString

{

	int height;

	CPoint c;

public:

	Cubois(int m, int n, int k,int i,int v,int l):CString(m,n),c(i,v,l) {

		height = k;

	}

	int CVolume() {

		int volume =height*width*length;

		cout << "�ó���������Ϊ:" << volume <<endl;

		return 0;

	}

};



int main() {

	CString c1(10,20);

	Cubois c2(10, 20, 30,2,3,4);

	c1.CPerimeter();

	c1.CSquare();

	c2.CPerimeter();

	c2.CSquare();

	c2.CVolume();

}
