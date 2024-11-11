#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ifstream fin1("a.dat", ios::in);
	if (!fin1.is_open()) {
		cout << "Cannot open output file.\n";
		exit(1);
	}
	int i; double d;
	fin1>> i >> d;
	cout << "a.dat文件内容为：" << i <<" " << d << endl;

	ofstream fout1("b.dat",ios::out);
	if (!fout1.is_open()) {
		cout << "Cannot open output file.\n";
		exit(1);
	}
	fout1 << i << " " << d;
	fin1.close();
	fout1.close();
	return 0;
}