#include<iostream>
#include<vector>
#include <string>
using namespace std;

int NumToStr(char a)
{

}

int main()
{
	string str = "0100148700";
	int num = 0;
	for (int i = 0; i < str.length(); i++)
	{
		num += NumToStr(str[i]);
	}
}