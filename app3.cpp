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
	cout<<"�ֱ����븴��C1��ʵ�����鲿��" << endl;
	cin >> c1.real>> c1.image;
	cout << "�ֱ����븴��C2��ʵ�����鲿��" << endl;
	cin >> c2.real >> c2.image;
	exchange(c1, c2);
	cout << "����c1ʵ��Ϊ��" << c1.real << "����c1�鲿Ϊ��" << c1.image << endl;
	cout << "����c2ʵ��Ϊ��" << c2.real << "����c2�鲿Ϊ��" << c2.image << endl;
	system("pause");
	return 0;
}