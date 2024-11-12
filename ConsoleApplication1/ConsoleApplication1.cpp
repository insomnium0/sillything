#include <iostream> // needed
#include <string> // for std::string
#include <fstream> // no idea

using namespace std; // takes away the std like std::cout << and lets you just use cout <<

int main() {
	string personalname; // makes the variable personalname which we will store info in later
	string noun; // makes the variable noun which we will store info in later
	string adjective; //makes the variable adjective which we will store info in later

	cout << "enter a name: " << endl;
	getline(cin, personalname); // stores the name that we (the user) had entered. 

	cout << "enter a noun: " << endl;
	getline(cin, noun); // does the same as the other getline but this time its a noun

	cout << "enter an adjective: " << endl;
	getline(cin, adjective); // stores the adjective string after.

	cout << "Hey " << personalname << ", let me touch your " << noun << ". wow! its so " << adjective << "!";

	return 0;
}
