#include <iostream>

using namespace std;

int main()
{
	double temperature;
	cout << "Write temperature ( in celsius ): ";
	cin >> temperature;

	double kelvins = temperature + 273.15;
	double farenheit = (temperature * 1.8) + 32;

	cout << "Temperature in kelvins: " << kelvins << endl;
	cout << "Temperature in farenheit: " << farenheit << endl;

	return 0;
}