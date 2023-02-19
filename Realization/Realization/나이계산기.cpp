#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
#include<stdbool.h>
using namespace std;

int curYear = -1, curMon = -1, curDay = -1;
int targetBirthYear = -1, targetBirthMon = -1, targetBirthDay = -1;
//  한국식 나이   만나이
int korAge = -1, age = -1;
void main()
{
	cout << "오늘 날짜를 입력해주세요(공백을 기준으로 연, 월, 일을 입력)" << endl;
	//연월일 입력받기
	cin >> curYear >> curMon >> curDay;
	//정상적인 입력을 받았을 경우
	//잘못 입력받았을 경우
	while(curMon > 12 || 1 > curMon || curDay > 31 || 1 > curDay)
	{
		if (curMon > 12 || 1 > curMon) {
			cout << "월을 잘 못 입력하였습니다. 재입력해주세요." << endl;
			cin >> curMon;
		}
		if (curDay > 31 || 1 > curDay) {
			cout << "날짜를 잘 못 입력하였습니다. 재입력해주세요." << endl;
			cin >> curDay;
		}
	}
	cout <<"오늘은 " << curYear << "년 " << curMon << "월 " << curDay<<"일 입니다." << endl;

	//신상 정보 입력
	string targetName = "";
	cout << "대상의 이름을 입력해주세요" << endl;
	cin >> targetName;
		
	cout << "대상의 생년월일을 입력해주세요(공백을 기준으로 입력합니다)" << endl;
	cin >> targetBirthYear >> targetBirthMon >> targetBirthDay;

	while (targetBirthMon > 12 || 1 > targetBirthMon || targetBirthDay > 31 || 1 > targetBirthDay)
	{
		if (targetBirthMon > 12 || 1 > targetBirthMon) {
			cout << "월을 잘 못 입력하였습니다. 재입력해주세요." << endl;
			cin >> targetBirthMon;
		}
		if (targetBirthDay > 31 || 1 > targetBirthDay) {
			cout << "날짜를 잘 못 입력하였습니다. 재입력해주세요." << endl;
			cin >> targetBirthDay;
		}
	}
	cout <<targetName<<"의 생년월일은 " << targetBirthYear << "년 " << targetBirthMon << "월 " << targetBirthDay <<"일 입니다." << endl;
	
	//한국식 나이
	korAge = (curYear - targetBirthYear)+1;
	int temp = korAge;
	string birthDay ="";
	//만나이
	if (curMon < targetBirthMon) age = temp - 2;		//생일 안지남
	else if (curMon > targetBirthMon) age = --temp;	//생일 지남
	else if (curMon == targetBirthMon)					//달이 같음
	{
		if (curDay < targetBirthDay) age = temp - 2;		//생일 안지남
		else if (curDay > targetBirthDay) age = --temp;	//생일 지남
		else if (curDay == targetBirthDay)					//생일
		{
			age = --temp;
			birthDay = targetName + "님 생일 축하드립니다!";
		}
	}

	cout << targetName << "님의 나이는" << korAge << "세 (만 " << age << "세) 입니다.\n" << birthDay << endl;


}