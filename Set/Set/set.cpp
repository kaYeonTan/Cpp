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

	//��°� : 1  2  3  4  5  6  7  8

	//�ߺ��� �� �ֱ�
	s.insert(2);
	for (i = s.begin(); i != s.end(); i++)
	{
		cout << *i << "  ";
	};
	cout << endl;
	//��°� : 1  2  3  4  5  6  7  8

	//�����ϴ� ���� ã��
	i = s.find(2);
	if (i != s.end()) cout << *i << " ����" << endl;
	else cout << "�������� ����" << endl;

	//��°� : 2 ����

	//�������� �ʴ� ����ã��
	i = s.find(10);
	if (i != s.end()) cout << *i << " ����" << endl;
	else cout << "�������� ����" << endl;
}
	//��°� : �������� ����