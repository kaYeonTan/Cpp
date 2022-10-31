#include <iostream>
#include<utility>
#include<string>

using namespace std;

void Same(pair<int, string>a, pair<int, string>b)
{
	if (a == b) cout << "true" << endl;
	else cout << "false" << endl;
}

int main(void)
{
	pair<int, string> p1 = make_pair(1, "Cat");
	pair<int, string> p2 = make_pair(1, "Dog");
	pair<int, string> p3 = make_pair(1, "Cat");

	cout << "p1.first : " << p1.first << endl;
	cout << "p1.second : " << p1.second << endl;
	cout << endl;

	cout<< "p1 == p1 : ";
	Same(p1, p2);
	cout<< "p1 == p3 : ";
	Same(p1, p3);
	cout<< endl;

	return 0;
}