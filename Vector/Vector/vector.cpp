#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> a;

	cout << "< a[i], a.size(), a.capacity() >" << endl;
	for (int i = 0; i <= 64; i++)
	{
		a.push_back(i + 1);
		cout << "< " << a[i] << ", " << a.size() << ", " << a.capacity() << " >" << endl;
	};

	return 0;	
}