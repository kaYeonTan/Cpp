#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include<stdbool.h>
using namespace std;

int curYear = -1, curMon = -1, curDay = -1;
int targetBirthYear = -1, targetBirthMon = -1, targetBirthDay = -1;
//  �ѱ��� ����   ������
int korAge = -1, age = -1;
void main()
{
	cout << "���� ��¥�� �Է����ּ���(������ �������� ��, ��, ���� �Է�)" << endl;
	//������ �Է¹ޱ�
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
	string targetName = "";
	cout << "����� �̸��� �Է����ּ���" << endl;
	cin >> targetName;
		
	cout << "����� ��������� �Է����ּ���(������ �������� �Է��մϴ�)" << endl;
	cin >> targetBirthYear >> targetBirthMon >> targetBirthDay;

	while (targetBirthMon > 12 || 1 > targetBirthMon || targetBirthDay > 31 || 1 > targetBirthDay)
	{
		if (targetBirthMon > 12 || 1 > targetBirthMon) {
			cout << "���� �� �� �Է��Ͽ����ϴ�. ���Է����ּ���." << endl;
			cin >> targetBirthMon;
		}
		if (targetBirthDay > 31 || 1 > targetBirthDay) {
			cout << "��¥�� �� �� �Է��Ͽ����ϴ�. ���Է����ּ���." << endl;
			cin >> targetBirthDay;
		}
	}
	cout <<targetName<<"�� ��������� " << targetBirthYear << "�� " << targetBirthMon << "�� " << targetBirthDay <<"�� �Դϴ�." << endl;
	
	//�ѱ��� ����
	korAge = (curYear - targetBirthYear)+1;
	int temp = korAge;
	string birthDay ="";
	//������
	if (curMon < targetBirthMon) age = temp - 2;		//���� ������
	else if (curMon > targetBirthMon) age = --temp;	//���� ����
	else if (curMon == targetBirthMon)					//���� ����
	{
		if (curDay < targetBirthDay) age = temp - 2;		//���� ������
		else if (curDay > targetBirthDay) age = --temp;	//���� ����
		else if (curDay == targetBirthDay)					//����
		{
			age = --temp;
			birthDay = targetName + "�� ���� ���ϵ帳�ϴ�!";
		}
	}

	cout << targetName << "���� ���̴�" << korAge << "�� (�� " << age << "��) �Դϴ�.\n" << birthDay << endl;


}