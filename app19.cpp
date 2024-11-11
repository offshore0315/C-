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
	cout << "����1��ʵ��Ϊ��"<<real(complex1) <<"�鲿Ϊ��"<<imag(complex1) << endl;
	cout << "����2��ʵ��Ϊ��" << real(complex2) << "�鲿Ϊ��" << imag(complex2) << endl;
	cout << "����3��ʵ��Ϊ��" << real(complex3) << "�鲿Ϊ��" << imag(complex3) << endl;
	fin2.close();
	fout2.close();
	return 0;
}