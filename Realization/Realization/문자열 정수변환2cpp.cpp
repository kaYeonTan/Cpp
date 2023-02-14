#include<iostream>
#include <string>
#include<cmath>
using namespace std;

void main()
{
	string str = "-422002";
	int result = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] < '0' || '9' < str[i]) continue;
		else
		{
			result *= 10;
			result += str[i] - '0';
		}
	}
	if (str[0] == '-') result *= -1;
	cout << result;
}