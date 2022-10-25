#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	vector<string> x;
	x.clear();

	cout << str <<"\n\n\n";

	int current = 0;
	int previous = 0;

	string ch[10000];
		
	//												못 찾으면 npos 리턴
	while ((current = str.find(',', previous)) != string::npos)
	{
		string substring = str.substr(previous, current - previous);
		x.push_back(substring);
		previous = current + 1;
	};
	x.push_back(str.substr(previous, current - previous));

	for (int i = 0; i < x.size(); i++) {
		cout << x[i] << endl;
	};

	return 0;
}