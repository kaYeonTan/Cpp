#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;

void main()
{
	cout << "���� ��¥�� �Է����ּ���(������ �������� ��, ��, ���� �Է�)" << endl;
	//������ �Է¹ޱ�
	int curYear = -1, curMon = -1, curDay = -1;
	cin >> curYear >> curMon >> curDay;
	//�������� �Է��� �޾��� ���
	//�߸� �Է¹޾��� ���
	while(curMon > 12 || 1 > curMon || curDay > 31 || 1 > curDay)
	{
		if (curMon > 12 || 1 > curMon) {
			cout << "���� �� �� �Է��Ͽ����ϴ�. ���Է����ּ���." << endl;
			cin >> curMon;
		}
		if (curDay > 31 || 1 > curDay) {
			cout << "��¥�� �� �� �Է��Ͽ����ϴ�. ���Է����ּ���." << endl;
			cin >> curDay;
		}
	}
	cout <<"������ " << curYear << "�� " << curMon << "�� " << curDay<<"�� �Դϴ�." << endl;

	//�Ż� ���� �Է�
	string name = "";
	cout << "����� �̸��� �Է����ּ���" << endl;
	cin >> name;
	cout << "����� ������ϰ� �ֹι�ȣ ���ڸ��� �Է����ּ���(�� : [][][][][][]-[]XXXXXX" << endl;
	string registrationNum = "";
	cin >> registrationNum;

}