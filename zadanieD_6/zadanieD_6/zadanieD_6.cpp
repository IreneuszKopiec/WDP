#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 4, c = 5, d = 6;
	int x;
	cin >> x;

	int trzeci, drugi;

	trzeci = a * (x * x * x) + b * (x * x) + c * x + d;
	drugi = a * (x * x) + b * x + c;

	cout << trzeci << endl;
	cout << drugi;
}