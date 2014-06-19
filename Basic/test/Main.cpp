// Test.cpp

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Inequalities.cpp"
#include "StringConversion.cpp"

int main(){
	// prompt user for input
	int d1, d2;

	cout << "Give me the first number: ";
	cin >> d1;
	cout << "Give me the second number: ";
	cin >> d2;

	char c;
	cout << "Which function a) Max() or b) Min()? ";
	cin >> c;
	if (c == 'a'){
		cout << "Max value is: " << Max<int>(d1, d2) << endl;
	}
	else {
		cout << "Min value is: " << Min<int>(d1, d2) << endl;
	}



	long dA = 12334; long dB = 2; long dC = -3;
	cout << "\n \n Max and min of three numbers: " << endl;
	cout << "Max value is: " << Max<long>(dA, dB, dC) << endl;
	cout << "Min value is: " << Min<long>(dA, dB, dC) << endl;



	int i = 10;
	long j = 123467890;
	float f = 3.14f;
	double d = 2.712222222222223;

	string myString = getString<int>(i);
	cout << myString << endl;

	myString = getString<long>(j);
	cout << myString << endl;
	
	myString = getString<float>(f);
	cout << myString << endl;

	myString = getString<double>(d);
	cout << myString << endl;
	
	system("pause");
	return 0;
}