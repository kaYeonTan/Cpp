#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>
using namespace std;

void main()
{
	cout << "오늘 날짜를 입력해주세요(공백을 기준으로 연, 월, 일을 입력)" << endl;
	//연월일 입력받기
	int curYear = -1, curMon = -1, curDay = -1;
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
	string name = "";
	cout << "대상의 이름을 입력해주세요" << endl;
	cin >> name;
	cout << "대상의 생년월일과 주민번호 앞자리를 입력해주세요(예 : [][][][][][]-[]XXXXXX" << endl;
	string registrationNum = "";
	cin >> registrationNum;

}