// RomanNumerals.cpp - Anna Myers - 25 October 2026
// Description: Converts Roman numerals to its decimal number representative

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
int romanCharValue(char r);
int convertRomanToInt(string s);

int main(void) {
	// Define String
	string input;

	// Obtain user input
	while (true) {
		cout << "Enter Roman number or Q to quit: ";
		getline(cin, input);

		// So user doesn't have to keep exiting the program
		if (input == "Q") {
			break;
		}

		// Display to user
		cout << input << " = " << convertRomanToInt(input) << endl;

	}
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

// Converts a roman number string to its integer value
int convertRomanToInt(string s) {
	int total = 0;

	while (s.length() > 0) {
		// First character >= second character or only one character left
		if (s.length() == 1 || romanCharValue(s[0]) >= romanCharValue(s[1])) {
			total += romanCharValue(s[0]);
			s.erase(0, 1); // remove the first character
		}
		else {
			total += romanCharValue(s[1]) - romanCharValue(s[0]);
			s.erase(0, 2); // remove both charactrers
		}
	}

	return total;

}