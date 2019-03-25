#ifndef PERSON_HPP
#define PERSON_HPP

#include<string>
using namespace std;

class Person {
	private:
		string name;
		int age;
	public:
		// Constructor
		Person(string n, int a);
		Person();
		
		// Setters for the internal variables
		void setName(string n) { name = n; }
		void setAge(int a) { age = a; }

		// Overloaded IO operators
		friend ostream& operator<<(ostream& output, const Person& p);
		friend istream& operator>>(istream& input, Person& p);
		// Overloaded operators
		bool operator<(const Person& p);
		bool operator>(const Person& p);
		bool operator==(const Person& p);

		// Add person
		void addPerson();
		// List everyone
		void listEveryone();
		// Remove person
		void removePerson();
		// Find Oldest
		void findOldest();

		// Add person by vector
		void addPersonByVector();
		// List everyone by vector
		void listEveryoneByVector();
		// Remove person by vector
		void removePersonByVector();
		// Find oldest by vector
		void findOldestByVector();
		// Sort data
		void sortDataByVector();
};

#endif