#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	//�⺻���� 1�� �ʱ�ȭ �� 5���� ���Ҹ� ������ vector a
	vector<int> a(5, 1); 

	cout << "<���� ����>" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	a.assign(5, 2);

	cout << "a ���Ϳ� <assign()>" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	cout << endl;

	//vector b�� 1~10 ���ʴ�� push_back�ϱ�
	vector<int> b;
	for (int i = 0; i < 10; i++)
	{
		b.push_back(i);
	}
	cout << "vector<int> b�� <push_baack>" << endl;
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	};
	cout << endl;
	cout << endl;

	cout << "<b.at(1)>" << endl;
	cout << b.at(1) << endl;
	cout << "<b[1]>" << endl;
	cout << b[1] << endl;
	cout << "<b.front()>" << endl;
	cout << b.front() << endl;
	cout << "<b.back()>" << endl;
	cout << b.back() << endl;
	cout << "<b.pop_back()>" << endl;
	b.pop_back();
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	};
	cout << endl;
	cout << endl;


	cout << "<a.swap(b)> a�� b ����" << endl;
	a.swap(b);
	cout << "b : ";
	for (int i = 0; i < b.size(); i++)
	{
		cout << b[i] << " ";
	};
	cout << endl;
	cout << "a : ";
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	};
	cout << endl;
	cout << endl;
	
	cout << "b�� size : " << b.size() << ", b�� capacity : " << b.capacity() << endl;
	cout << "b.clear" << endl;
	b.clear();
	cout << "b�� size : " << b.size() << ", b�� capacity : " << b.capacity() << endl;

	return 0;
}