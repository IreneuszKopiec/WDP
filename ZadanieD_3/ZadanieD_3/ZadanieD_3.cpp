#include <iostream>

using namespace std;

int main()
{
	int a = 3, b = 2, c = 4, d;
	d = a++ + b - c % 3; //a=4  ,b=2 , c=4  ,d=4
	d = ++a + b - c % 3; //a=5  ,b=2  , c=4 ,d=6
	d = (b = c) + 2; //a=5  ,b=4  , c=4  ,d=6
	return 0;
}