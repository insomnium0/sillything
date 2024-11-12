#include <iostream> // we have to :p
#include <string> // for std::string
#include <fstream> // you'll see once we start using like std::ofstream

using namespace std; // takes away the std like std::cout << -> cout <<

int main() {
	string personalname; // makes the variable user which we will store info in later
	string noun; // makes the variable pass which we will store info in later
	string adjective; //makes the variable filename which we will store info in later

	cout << "enter a name: " << endl;
	getline(cin, personalname); // stores the user value taken from the line that we (the user) had entered after user: 

	cout << "enter a noun: " << endl;
	getline(cin, noun); // does the same as the other getline but uses pass

	cout << "enter an adjective: " << endl;
	getline(cin, adjective); // stores value at the filename we've established above using string filename;

	cout << "Hey " << personalname << ", let me touch your " << noun << ". wow! its so " << adjective << "!";

	return 0;
}