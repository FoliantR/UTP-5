#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string secondName, string firstName, string dateOfBirth, string adress,
	string phoneNumber, string faculty, string course)
{
	_secondName = secondName;
	_firstName = firstName;
	_dateOfBirth = dateOfBirth;
	_adress = adress;
	_phoneNumber = phoneNumber;
	_faculty = faculty;
	_course = course;
}

string Student::show() {
	return _secondName + " " + _firstName + " " + _dateOfBirth + " " + _adress
		+ " " + _phoneNumber + " " + _faculty + " " + _course + '\n';
}

string Student::GetSecondName() { return _secondName; }
string Student::GetFirstName() { return _firstName; }
string Student::GetDateOfBirth() { return _dateOfBirth; }
string Student::GetAdress() { return _adress; }
string Student::GetPhoneNumber() { return _phoneNumber; }
string Student::GetFaculty() { return _faculty; }
string Student::GetCourse() { return _course; }

void Student::SetSecondName() { cout << _secondName << endl; }
void Student::SetFirstName() { cout << _firstName << endl; }
void Student::SetDateOfBirth() { cout << _dateOfBirth << endl; }
void Student::SetAdress() { cout << _adress << endl; }
void Student::SetPhoneNumber() { cout << _phoneNumber << endl; }
void Student::SetFaculty() { cout << _faculty << endl; }
void Student::SetCourse() { cout << _course << endl; }

