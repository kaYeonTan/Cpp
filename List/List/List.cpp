#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n = 5;
	list<int>  list_original{ 2,3,4,5 };
	list<int> list_new(list_original);			//복사생성자를 이용해 복사
	list<int> list_opercopy = list_new;	//대입연산자를 통해 복사

	list<int> list_itercopy(list_opercopy.begin(), list_opercopy.end()); //반복자 사용해서 복사

	for (int i : list_itercopy)		printf("%d ", i);

	return 0;
}