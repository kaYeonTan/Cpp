#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n = 5;
	list<int>  intList(n, 2);

	for (int i : intList)		printf("%d, ", i);

	return 0;
}