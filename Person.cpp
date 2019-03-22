#include "Person.hpp"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX_PERSON 9

Person personList[MAX_PERSON];
vector<Person> people;
Person p;
int personNum;

Person::Person(string n, int a) {
	name = n;
	age = a;
}

Person::Person() {
	name = "";
	age = 0;
}

// Overloaded IO operators
ostream & operator<<(ostream& output, const Person& p) {
	output << p.name << " " << p.age << endl;
	return output;
}

istream & operator>>(istream& input, Person& p) {
	input >> p.name >> p.age;
	return input;
}

// Overloaded < operator
bool Person::operator<(const Person& p) {
	return this->age < p.age;
}

// Overloaded > operator
bool Person::operator>(const Person& p) {
	return this->age > p.age;
}

// Overloaded == operator
bool Person::operator==(const Person& p) {
	return this->age == p.age;
}

void Person::addPerson() {
	cout << "Enter Details: ";
	cin >> p;

	if (personNum < MAX_PERSON) {
		personList[personNum++] = p;
	} else {
		cout << "Array is full" << endl;
	}
}

void Person::listEveryone() {
	for (int i = 0; i < personNum; i++) {
		cout << "[" << i + 1 << "] ";
		cout << personList[i].name << " " << personList[i].age << endl;
	}
}

void Person::removePerson() {
	int indexToDelete;
	
	if (personNum == 0) {
		cout << "There are no elements to remove" << endl;
	} else {
		cout << "Enter Index: ";
		cin >> indexToDelete;

		indexToDelete = indexToDelete - 1;

		if (indexToDelete < 0 || indexToDelete > personNum - 1) {
			cout << "Index out of bounds" << endl;
			removePerson();
		} else {
			for (int i = indexToDelete; i < personNum; i++) {
				personList[i] = personList[i + 1];
			}
			personNum--;
		}
	}

}

void Person::findOldest() {
	int oldest = 0;

	for (int i = 0; i < personNum; i++) {
		if (personList[i].age > oldest) {
			oldest = i;
		}
	}

	cout << "Oldest: " << personList[oldest].name << " " << personList[oldest].age << endl;
}

void Person::addPersonByVector() {
	cout << "Enter Details: ";
	cin >> p;

	people.push_back(p);
}

void Person::listEveryoneByVector() {
	int count = 1;
	vector<Person>::iterator i;

	for (i = people.begin(); i != people.end(); i++) {
		cout << "[" << count++ << "] ";
		cout << (*i).name << " " << (*i).age << endl;
;	}
}

void Person::removePersonByVector() {
	int indexToDelete;

	if (people.empty()) {
		cout << "There are no elements to remove" << endl;
	} else {
		cout << "Enter Index: ";
		cin >> indexToDelete;

		indexToDelete = indexToDelete - 1;

		if (indexToDelete < 0 || indexToDelete > people.size() - 1) {
			cout << "Index out of bounds" << endl;
			removePerson();
		} else {
			people.erase(people.begin() + indexToDelete);
		}
	}
}

void Person::findOldestByVector() {
	int oldest = 0;
	int count = 0;
	vector<Person>::iterator i;

	for (i = people.begin(); i != people.end(); i++) {
		if ((*i).age > oldest) {
			oldest = count;
		}
		count++;
	}

	cout << "Oldest: " << people.at(oldest).name << " " << people.at(oldest).age << endl;
}

void Person::sortDataByVector() {
	sort(people.begin(), people.end());
}