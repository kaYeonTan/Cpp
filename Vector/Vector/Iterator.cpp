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
	// vector 반복자 iter는 v의 시작점을 가리킴
	iter = v.begin();

	cout << &iter << endl;
	cout << *iter << endl;
	// 임의 접근
	cout << iter[1] << endl;

	iter += 2; // += 연산 사용
	cout << &iter << endl;
	cout << *iter << endl;

	// 반복
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << endl;
	}


	return 0;
}