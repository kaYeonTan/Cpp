#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main(void) {

	string str1 = "1D2S#10S";
	stringstream ss1(str1);

	cout << ss1.get() << " ";
	cout << ss1.get() << " ";
	cout << ss1.get() << " ";
	cout << ss1.get() << " ";
	cout << ss1.get() << " ";
	ss1.unget();
	cout << ss1.get() << " ";
	return 0;
}
