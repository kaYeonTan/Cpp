#include <iostream>
#include <queue>
using namespace std;

int main()
{
	queue<int> q1;
	queue<int> q2;

	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	q1.push(6);



	bool emt = q2.empty();

	//��� ����� 1�̹Ƿ� �������
	printf("q2 empty? %d\n", emt);


	printf("\nq1, q2 swap\n");	
	swap(q1, q2);
	int n = q2.size();

	printf("q2 : ");	
	for (int i = 0; i < n; i++)
	{
		//�� ���� �����͸� ���
		printf("%d ", q2.front());
		//�� ���� �����͸� �̾Ƴ��� ���� ����
		q2.pop();
	};
	printf("\n");
}