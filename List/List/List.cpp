#include <iostream>
#include <list>
using namespace std;

int main()
{
	int n = 5;
	list<int>  list_original{ 2,3,4,5 };
	list<int> list_new(list_original);			//��������ڸ� �̿��� ����
	list<int> list_opercopy = list_new;	//���Կ����ڸ� ���� ����

	list<int> list_itercopy(list_opercopy.begin(), list_opercopy.end()); //�ݺ��� ����ؼ� ����

	for (int i : list_itercopy)		printf("%d ", i);

	return 0;
}