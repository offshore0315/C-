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
	cout << "�������һ�����ѧ��������" << endl;
	cin >> m1;
	cout << "�������һ���༶ѧ���ɼ���" << endl;
	for (int i=0;i<m1;i++){
		int x;
		cin >> x;
		v1.push_back(x);
	}

	cout << "������ڶ������ѧ��������" << endl;
	cin >> m2;
	cout << "������ڶ����༶ѧ���ɼ���" << endl;
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
	cout << "��һ���༶ѧ����ƽ���ɼ�Ϊ��"<<avg1 << endl;
	for (int i = 0; i < m1; i++) {
		if (v1[i] < 60) {
			add1++;
		}
	}
	cout << "��һ���༶�������ѧ������Ϊ��" << add1 << endl;

	sort(v2.begin(), v2.end());
	for (int i = 0; i < m2; i++) {
		cout << v2[i] << endl;
	}
	for (int i = 0; i < m2; i++) {
		sum2 += v2[i];
	}
	avg2 = sum2 / m2;
	cout << "�ڶ����༶ѧ����ƽ���ɼ�Ϊ"<<avg2<< endl;
	for (int i = 0; i < m2; i++) {
		if (v2[i] < 60) {
			add2++;
		}
	}
	cout << "�ڶ����༶�������ѧ������Ϊ��" << add2 << endl;

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
	cout << "�����༶ѧ����ƽ���ɼ�Ϊ" << avg3 << endl;
	for (int i = 0; i < m1+m2; i++) {
		if (v1[i] < avg3) {
			add3++;
		}
	}
	cout << "�����༶С��ƽ���ɼ���ѧ������Ϊ��" << add3 << endl;
	return 0;
}