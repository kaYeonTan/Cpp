#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

// 구분자 배열, split할 문자열, 배열크기, previous
int findMany(string delArr[], string targetStr, int numdel, int previous) {

    int* curs = new int[numdel];

    int min = 987654321;
    for (int i = 0; i < numdel; i++) {
        curs[i] = targetStr.find(delArr[i], previous);
        if (curs[i] == string::npos) {
            curs[i] = 987654321;
        }
        if (curs[i] < min) {
            min = curs[i];
        }
    }
    if (min == 987654321) {
        return string::npos;
    }
    return min;
}

int main()
{
    string str = "java/c,c++,python";
    int previous = 0;
    int current = 0;
    vector<string> x;
    x.clear();

    string findchs[2] = { ",", "/" };
    //find는 찾을게 없으면 npos를 리턴함
    while ((current = findMany(findchs, str, 2, previous)) != string::npos) {
        string substring = str.substr(previous, current - previous);
        x.push_back(substring);
        previous = current + 1;
    }
    x.push_back(str.substr(previous, current - previous));

    for (int i = 0; i < x.size(); i++) {
        cout << x[i] << endl;
    }


    return 0;
}