//137339 Peter Chemelil
//CAT 1 questions 2
#include <iostream>
using namespace std;

int main()
{
	float celsius, fahrenheit;
	
	cout<<"Enter Fahrenheit to be converted into Celsius:\n";
	cin>> fahrenheit;
	celsius = 5.0/9.0*(fahrenheit-32.0);
	cout<<"In celsius it is: " << celsius;
	return 0;
}
