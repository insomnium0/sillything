#include <iostream> // we have to :p
#include <string> // for std::string
#include <fstream> // you'll see once we start using like std::ofstream

using namespace std; // takes away the std like std::cout << -> cout <<

int main() {
	string personalname; // makes the variable user which we will store info in later
	string noun; // makes the variable pass which we will store info in later
	string adjective; //makes the variable filename which we will store info in later
	string nounplural; // makes the nounplural variable that will store the number for how many things 
	int unitsofnoun = 0;
	cout << "enter a name: " << endl;
	getline(cin, personalname); // stores the user value taken from the line that we (the user) had entered after user: 

	cout << "enter a noun: " << endl;
	getline(cin, noun); // does the same as the other getline but uses pass

	// Ask if the noun is plural with validation
	while (true) {
		cout << "Will the noun be plural? (yes/no): ";
		getline(cin, nounplural);
		if (nounplural == "yes" || nounplural == "no") {
			break; // Exit loop if input is valid
		}
		else {
			cout << "Sorry, that is not a yes or no. Please input either 'yes' or 'no'." << endl;
		}
	}
	// If noun is plural, ask for quantity with validation
	if (nounplural == "yes") {
		while (true) {
			cout << "How many units of this noun do you have?: ";
			if (cin >> unitsofnoun) {
				// If valid integer input, break out of the loop
				break;
			}
			else {
				// Clear the error flag on cin
				cin.clear();
				// Ignore the rest of the input line
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Error, please input a number: ";
			}
		}
		// Clear the newline left in the input buffer
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cout << "enter an adjective: " << endl;
	getline(cin, adjective); // stores value at the filename we've established above using string filename;

	if (nounplural == "yes") {
		cout << "Hey " << personalname << ", let me touch all of your " << noun << "s. ";
		cout << "Wow! All " << unitsofnoun << " of your " << noun << "s are so " << adjective << "!" << endl;
	}
	else {
		cout << "Hey " << personalname << ", let me touch your " << noun << ". ";
		cout << "Wow! It's so " << adjective << "!" << endl;
	}

	return 0;
}
