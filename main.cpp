// COMP282
// Project Template: Coursework 1

// PLEASE INCLUDE YOUR ID AT THE TOP OF EACH SOURCE FILE
// Student ID: 201376667

// - Create all your files in the same folder as this one
// - Make sure the .vscode folder is included when you package the project
// - Do not make any changes to the files in the .vscode folder

#include <iostream>
#include "Person.hpp"

using namespace std;

void main_part1() {
	// Treat this as the main method for PART 1 of the coursework
	Person p1, p2, p3;
	cin >> p1 >> p2 >> p3;
	cout << "---------" << endl;
	cout << (p1 < p2) << endl << (p1 > p2) << endl << (p1 == p3) << endl;
}

void main_part2() {
	// Treat this as the main method for PART 2 of the coursework
	char input;
	Person p;

	do {
		cout << "1. Add Person" << endl;
		cout << "2. List Everyone" << endl;
		cout << "3. Remove Person" << endl;
		cout << "4. Find Oldest" << endl;
		cout << "Q. Quit" << endl;
		cout << "Enter Option: ";
		cin >> input;
		switch (input) {
			case '1': p.addPerson(); break;
			case '2': p.listEveryone(); break;
			case '3': p.removePerson(); break;
			case '4': p.findOldest(); break;
			case 'Q': break;
			default:
				cout << "Invalid Option" << endl; break;
		}
	} while (input != 'Q');
}

void main_part3() {
	// Treat this as the main method for PART 3 of the coursework
	char input;
	Person p;

	do {
		cout << "1. Add Person" << endl;
		cout << "2. List Everyone" << endl;
		cout << "3. Remove Person" << endl;
		cout << "4. Find Oldest" << endl;
		cout << "5. Sort Data" << endl;
		cout << "Q. Quit" << endl;
		cout << "Enter Option: ";
		cin >> input;
		switch (input) {
		case '1': p.addPersonByVector(); break;
		case '2': p.listEveryoneByVector(); break;
		case '3': p.removePersonByVector(); break;
		case '4': p.findOldestByVector(); break;
		case '5': p.sortDataByVector(); break;
		case 'Q': break;
		default:
			cout << "Invalid Option" << endl; break;
		}
	} while (input != 'Q');
}

int main() {
	// UNCOMMENT THE RELEVANT LINE TO TEST/RUN EACH PART
	// main_part1();
	// main_part2();
	main_part3();
}
