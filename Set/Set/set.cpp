#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> s;

	s.insert(1);
	s.insert(4);
	s.insert(7);
	s.insert(2);
	s.insert(3);
	s.insert(5);
	s.insert(6);
	s.insert(8);

	set<int>::iterator i;
	for (i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	};
	cout << endl;

	//출력값 : 1  2  3  4  5  6  7  8

	//중복된 값 넣기
	s.insert(2);
	for (i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	};
	cout << endl;
	//출력값 : 1  2  3  4  5  6  7  8

	//존재하는 원소 찾기
	i = s.find(2);
	if (i != s.end()) cout << *i << " 존재" << endl;
	else cout << "존재하지 않음" << endl;

	//출력값 : 2 존재

	//존재하지 않는 원소찾기
	i = s.find(10);
	if (i != s.end()) cout << *i << " 존재" << endl;
	else cout << "존재하지 않음" << endl;
}
	//출력값 : 존재하지 않음