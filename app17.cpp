#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a, int b) {
	return a>b;
}

int main() {
	int m1, m2;
	int add1=0, add2=0,add3=0;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	double avg1, avg2, avg3;
	vector <int> v1;
	vector <int> v2;
	vector <int>::iterator i1,i2;
	cout << "请输入第一个班的学生人数：" << endl;
	cin >> m1;
	cout << "请输入第一个班级学生成绩：" << endl;
	for (int i=0;i<m1;i++){
		int x;
		cin >> x;
		v1.push_back(x);
	}

	cout << "请输入第二个班的学生人数：" << endl;
	cin >> m2;
	cout << "请输入第二个班级学生成绩：" << endl;
	for (int i = 0; i < m2; i++) {
		int x;
		cin >> x;
		v2.push_back(x);
	}

	sort(v1.begin(), v1.end());
	for(int i = 0; i < m1; i++) {
		cout << v1[i] << endl;
	}
	for (int i = 0; i < m1; i++) {
		sum1 += v1[i];
	}
	avg1 = sum1 / m1;
	cout << "第一个班级学生的平均成绩为："<<avg1 << endl;
	for (int i = 0; i < m1; i++) {
		if (v1[i] < 60) {
			add1++;
		}
	}
	cout << "第一个班级不及格的学生人数为：" << add1 << endl;

	sort(v2.begin(), v2.end());
	for (int i = 0; i < m2; i++) {
		cout << v2[i] << endl;
	}
	for (int i = 0; i < m2; i++) {
		sum2 += v2[i];
	}
	avg2 = sum2 / m2;
	cout << "第二个班级学生的平均成绩为"<<avg2<< endl;
	for (int i = 0; i < m2; i++) {
		if (v2[i] < 60) {
			add2++;
		}
	}
	cout << "第二个班级不及格的学生人数为：" << add2 << endl;

	v1.insert(v1.end()-1, v2.begin(), v2.end());
	i1 = v1.begin();
	i2 = v1.end();
	sort(i1, i2,compare);
	for (int i = 0; i < m1 + m2; i++) {
		cout << v1[i] << endl;
	}
	for (int i = 0; i < m1 + m2; i++) {
		sum3 += v1[i];
	}
	avg3 = sum3 / (m1 + m2);
	cout << "两个班级学生的平均成绩为" << avg3 << endl;
	for (int i = 0; i < m1+m2; i++) {
		if (v1[i] < avg3) {
			add3++;
		}
	}
	cout << "两个班级小于平均成绩的学生人数为：" << add3 << endl;
	return 0;
}