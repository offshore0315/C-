#include<iostream>
using namespace std;

class Phone{
	char name;
	int insert;
public:
	Phone(char m, int n) {
		name = m;
		insert = n;
	}
	char setname() {
		return name;
	}
	 int setinsert() {
		 return insert;
	}
	virtual void Call() {
		cout << "调用打电话函数" << endl;
	}
};

class Nosmart:public Phone{
	int delay;
public:
	Nosmart(char m,int n,int k):Phone(m,n) {
		delay = k;
	}
	void Call() {
		cout << "非智能手机调用打电话函数" << endl;
	}
	void Bigshow() {
		cout << "超大字显示" << endl;
	}
	friend void show(Nosmart c1)
};

void show(Nosmart c1)
{
	char x = c1.setname();
	int y = c1.setinsert();
	cout << "该非智能手机信息如下：" << endl;
	cout << x << endl;
	cout << y << endl;
	cout << c1.delay << endl;
}


class Reconize {
	virtual void Reconized() {
		cout << "调用识别方法" << endl;
	}
};

class Smart :public Phone,public Reconize{
	int fenbian;
public:
	Smart(char m, int n, int k) :Phone(m, n) {
		fenbian = k;
	}
	void Call() {
		cout << "智能手机调用打电话函数" << endl;
	}
	void Reconized() {
		cout <<"智能手机调用指纹识别类函数" << endl;
	}
};
int operator <(Phone c1,Phone c2) {
	int x;int y;
	x = c1.setinsert();
	y = c2.setinsert();
	if (x >y) {
		cout << "两个手机比较 第一个手机的内存较大" << endl;
	}
	else
		cout << "两个手机比较 第二个手机的内存较大" << endl;
	return 0;
}


int main() {
	Nosmart c1(1, 2, 2);
	Smart c2(3,4,5);
	Phone* c;
	c =& c1;
	c->Call();
	c = &c2;
	c->Call();
	operator<(c1, c2);
	system("pause");
	return 0;
}