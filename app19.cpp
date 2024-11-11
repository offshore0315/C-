#include<iostream>
#include<fstream>
#include <complex>
#include <complex.h>
using namespace std;
int main() {
	ofstream fout2("a.dat", ios::binary);
	if (!fout2.is_open()) {
		cout << "Cannot open output file\n,";
		exit(1);
	}
	complex<int> complex1(2, 2);
	complex<int> complex2(3, 3);
	complex<int> complex3(5, 5);
	fout2.put(real(complex1));
	fout2.put(imag(complex1));
	fout2.put(real(complex2));
	fout2.put(imag(complex2));
	fout2.put(real(complex3));
	fout2.put(imag(complex3));

	ifstream fin2("a.dat",ios::binary);
	if (!fin2.is_open()) {
		cout << "Cannot open output file\n,";
		exit(1);
	}
	fin2.get();
	cout << "复数1的实部为："<<real(complex1) <<"虚部为："<<imag(complex1) << endl;
	cout << "复数2的实部为：" << real(complex2) << "虚部为：" << imag(complex2) << endl;
	cout << "复数3的实部为：" << real(complex3) << "虚部为：" << imag(complex3) << endl;
	fin2.close();
	fout2.close();
	return 0;
}