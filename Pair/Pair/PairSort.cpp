#include<iostream>
#include<utility>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<pair<int, string>> a;

	a.push_back(pair<int, string>(3, "Dog"));
	a.push_back(pair<int, string>(1, "Cat"));
	a.push_back(pair<int, string>(4, "Monkey"));
	a.push_back(pair<int, string>(6, "Duck"));
	a.push_back(pair<int, string>(2, "Alligator"));
	a.push_back(pair<int, string>(2, "Beaver"));

	cout << "========Before Sort========" << endl;

	//출력 코드
	vector<pair<int, string>>::iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << "[" << iter->first << ", " << iter->second << "]" << endl;
	}

	cout << endl;
	sort(a.begin(), a.end());
	cout << "========After Sort========" << endl;

	for (iter = a.begin(); iter != a.end(); iter++)
	{
		cout << "[" << iter->first << ", " << iter->second << "]" << endl;
	}
	return 0;
}