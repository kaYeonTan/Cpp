#include<iostream>
#include <string>
#include<cmath>
using namespace std;

//long long NumToStr(char a, int b)
//{
//	int temp = a - '0';
//	return temp * pow(10, b);
//}

int main()
{
	string str = "010014870";
	long long int num = 0; 
	for (int i = 0; i < str.length(); i++)
	{
		//num += NumToStr(str[str.length()-i], i);
		num *= 10;
		num += str[i] - '0';
	}
	//10�� �������� ���ٺ��� 1�� �ڸ� ���ڵ� 10�� �������� �����󱸿�!
	//�׷��� �������� 10���� �������ϴ�.
	//num /= 10;
	cout << num;
}