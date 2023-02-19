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
	//10의 제곱으로 들어가다보니 1의 자리 숫자도 10이 곱해져서 들어가더라구요!
	//그래서 마지막에 10으로 나눴습니다.
	//num /= 10;
	cout << num;
}