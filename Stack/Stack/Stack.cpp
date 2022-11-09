#include <iostream>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	stack<int> s2;
	int size;
		
	s.push(1);
	s.push(2);
	s.push(3);

	s2.push(10);
	s2.push(20);
	s2.push(30);

	size = s.size();

	cout << "[s, s2 swap]" << endl;
	swap(s, s2);

	for (int i = 0; i < size; i++)
	{
		cout << s.top() << " " << endl;
		s.pop();
	};
	cout << endl;
	return 0;
}