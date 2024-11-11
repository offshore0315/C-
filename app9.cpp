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
		cout << "该电脑的基本参数为：" << endl;
		cout << "CPU:" << Cpu<<endl;
		cout << "硬盘：" << Pan << endl;
		cout << "内存：" << Inside << endl;
	}
	Computer(const Computer& other) {
		cout << "构造函数中使用：" << endl;
		Cpu = other.Cpu;
		Pan = other.Pan;
		Inside = other.Inside;
	}
	friend int Add(Computer c);
};
int Add(Computer c) {
	cout << "硬盘和内存的总空间为：" << endl;
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