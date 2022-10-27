#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	//기본값이 1로 초기화 된 5개의 원소를 가지는 vector a
	vector<int> a(5, 1); 

	cout << "<벡터 선언>" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	a.assign(5, 2);

	cout << "a 벡터에 <assign()>" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
	cout << endl;

	//vector b에 1~10 차례대로 push_back하기
	vector<int> b;
	for (int i = 0; i < 10; i++)
	{
		b.push_back(i);
	}
	cout << "vector<int> b에 <push_baack>" << endl;
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


	cout << "<a.swap(b)> a와 b 스왑" << endl;
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
	
	cout << "b의 size : " << b.size() << ", b의 capacity : " << b.capacity() << endl;
	cout << "b.clear" << endl;
	b.clear();
	cout << "b의 size : " << b.size() << ", b의 capacity : " << b.capacity() << endl;

	return 0;
}