#include<iostream>
using namespace std;
class Loan {
protected:
	int a,i,n,b,Y,I;
	//设贷款额为a 12，月利率为i 1，年利率为I 1，
	//还款月数为n 12，每月还款额为b 2，还款利息总和为Y 24 
public:
	Loan(int a1, int a2, int a3, int a4, int a5, int a6) {
		a = a1; I = a3; b = a5;
		i = a2; n = a4; Y = a6;
	}
	virtual int check() {
		cout << "构造虚函数" << endl;
		return 0;
	}
};

class CXi:public Loan {
public:
	CXi(int a1, int a2, int a3, int a4, int a5, int a6) :Loan(a1, a2, a3, a4, a5, a6) {}
	int check() {
		double q = n * a * i * (1 + i) ^ n;
		double p = (1 + i) ^ n - 1;
		double total =q/p;
		cout << "年利率I计算公式为：" << I << "=12*" << i << endl;
		cout << "还款利息总和Y计算公式为：" << Y << "=" << n << "*" << b << endl;
		cout << "支付利息Y计算公式为：Y=n*a*i*(1+i)^n/[(1+i)^n-1]-a" <<"结果为："<< Y << endl;
		cout << "月均还款b计算公式为：b=a*i*(1+i)^n/[(1+i)^n-1]" << "结果为：" << b << endl;
		cout << "还款总额计算公式为：n*a*i*(1+i)^n/[(1+i)^n-1]" << "结果为：" << total << endl;
		return 0;
	}
};

class CJin:public Loan {
public:
	CJin(int a1, int a2, int a3, int a4, int a5, int a6): Loan(a1, a2, a3, a4, a5, a6) {
	}
	int check() {
		double A=a/n;
		double B = a/n * i;
		cout << "每月还本金为:"<<A << endl;
		cout << "第t个月利息计算公式为：(a-a(t-1)/n)*i" << endl;
		cout << "还款金额每月减少：" <<B<< endl;
		cout << "每月还款公式为：a/n+(a-a(t-1)/n)*i" << endl;
		return 0;
	}
};

void Show(Loan* c) {
	c->check();
}

int main() {
	CXi c1(12,1,1,12,2,24);
	CJin c2(12,1,1,12,2,24);
	Show(&c1);
	Show(&c2);
}
