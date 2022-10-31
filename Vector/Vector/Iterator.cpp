#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v;

	for (int i = 0; i < 7; i++) {
		v.push_back(10 * i);
	}

	vector<int>::iterator iter;
	// vector �ݺ��� iter�� v�� �������� ����Ŵ
	iter = v.begin();

	cout << &iter << endl;
	cout << *iter << endl;
	// ���� ����
	cout << iter[1] << endl;

	iter += 2; // += ���� ���
	cout << &iter << endl;
	cout << *iter << endl;

	// �ݺ�
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << endl;
	}


	return 0;
}