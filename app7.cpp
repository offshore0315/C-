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
	cout << "���캯����ʹ�ã�" << endl;
	name = new char[strlen(n) + 1];
	strcpy_s(name,strlen(n)+1, n);
	square = s;
}
country::~country() {
	cout << "��������������" << endl;
	delete[]name;
}

country::country(const country& cou) {
	cout << "�������캯����ʹ�ã�" << endl;
	name = cou.name;
	square = cou.square;
}

void country::show() {
	cout << name << "�Ļ�����ϢΪ" << endl;
	cout << name << endl;
	cout << square << endl;
}

void country::compare(country c2) {
	if (square > c2.square)
	{
		cout << name << "�Ĺ�������Ƚϴ�" << endl;
	}
	else
		cout << c2.name << "�Ĺ�������Ƚϴ�" << endl;
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