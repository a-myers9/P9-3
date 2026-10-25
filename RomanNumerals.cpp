// RomanNumerals.cpp - Anna Myers - 25 October 2026
// Description: Converts Roman numerals to its decimal number representative

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int romanCharValue(char r);

int main(void) {
	// Define variable to hold character
	char letter;

	// Obtain user input
	cout << "Enter a roman numeral character: ";
	cin >> letter;

	// Call function and display result
	cout << letter << " = " << romanCharValue(letter) << endl;
	return 0;
}

// Returns the value of one roman numeral character (0 if not a numeral 1)
int romanCharValue(char r) {
	int value = 0;

	switch (r) {
		case 'I': value = 1;	break;
		case 'V': value = 5;	break;
		case 'X': value = 10;	break;
		case 'L': value = 50;	break;
		case 'C': value = 100;	break;
		case 'D': value = 500;	break;
		case 'M': value = 1000; break;
	}
	return value;
}