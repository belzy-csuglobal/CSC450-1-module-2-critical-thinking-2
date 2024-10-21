#include <iostream>
#include <string>

using namespace std;

int main() {
	int round = 1;
	int rounds = 3;
	string firstInput;
	string secondInput;
	string combinedInput;
	string title = "String Concatenation - Round ";

	for (int i = round; i <= rounds; i++, round++) {
		// Print title.
		cout << title << round << endl;

		// Get first string from user.
		cout << " Enter first string: ";
		cin >> firstInput;

		// Get second string from user.
		cout << " Enter second string: ";
		cin >> secondInput;

		// Concatenate the strings.
		combinedInput = firstInput + " " + secondInput;

		// Print the concatenated strings.
		cout << " Concatenated: " << combinedInput << endl << endl;
	}

	return 0;
}
