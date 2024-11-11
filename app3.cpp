#include<iostream>
#include < string >
using namespace std;
struct complex
{
	int real;
	int image;
};
void exchange(complex &c1, complex &c2) {
	complex i, j;
	i.real = (c1).real;
	i.image = (c1).image;
	j.real = (c2).real;
	j.image = (c2).image;
	(c1).real = j.real;
	(c1).image = j.image;
	(c2).real = i.real;
	(c2).image = i.image;
}

int main() {
	complex c1, c2;
	cout<<"分别输入复数C1的实部和虚部：" << endl;
	cin >> c1.real>> c1.image;
	cout << "分别输入复数C2的实部和虚部：" << endl;
	cin >> c2.real >> c2.image;
	exchange(c1, c2);
	cout << "复数c1实部为：" << c1.real << "复数c1虚部为：" << c1.image << endl;
	cout << "复数c2实部为：" << c2.real << "复数c2虚部为：" << c2.image << endl;
	system("pause");
	return 0;
}