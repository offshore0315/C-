#include<iostream>
#include<cstring>
#include <windows.h>
using namespace std;

class country {
	char* name;
	int square;

public:
	country(const char* n, int s);
	~country();
	country(const country& other);
	void show();
	void compare(country c2);
};

country::country(const char* n, int s) {
	cout << "构造函数中使用：" << endl;
	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n)+1, n);
	square = s;
}
country::~country() {
	cout << "析构函数被调用" << endl;
	delete[]name;
}

country::country(const country& cou) {
	cout << "拷贝构造函数中使用：" << endl;
	name = cou.name;
	square = cou.square;
}

void country::show() {
	cout << name << "的基本信息为" << endl;
	cout << name << endl;
	cout << square << endl;
}

void country::compare(country c2) {
	if (square > c2.square)
	{
		cout << name << "的国土面积比较大" << endl;
	}
	else
		cout << c2.name << "的国土面积比较大" << endl;
}



int main() {
	country c1("A", 123);
	country c2("B", 234);
	country c3(c2);
	c1.show();
	c2.show();
	c3.show();
	c1.compare(c2);
	system("pause");
	return 0;
}