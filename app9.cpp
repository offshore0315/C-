#include<iostream>
using namespace std;

class Computer {
	int Cpu;
	int Pan;
	int Inside;
public:
	Computer(int m,int n,int k) {
		Cpu = m;
		Pan = n;
		Inside = k;
	}
	void show() {
		cout << "�õ��ԵĻ�������Ϊ��" << endl;
		cout << "CPU:" << Cpu<<endl;
		cout << "Ӳ�̣�" << Pan << endl;
		cout << "�ڴ棺" << Inside << endl;
	}
	Computer(const Computer& other) {
		cout << "���캯����ʹ�ã�" << endl;
		Cpu = other.Cpu;
		Pan = other.Pan;
		Inside = other.Inside;
	}
	friend int Add(Computer c);
};
int Add(Computer c) {
	cout << "Ӳ�̺��ڴ���ܿռ�Ϊ��" << endl;
	cout <<c.Pan+c.Inside<<endl;
	return 0;
}

int main() {
	Computer c1(1,2,3);
	Computer c2(c1);
	c1.show();
	c2.show();
	Add(c1);
	Add(c2);

}