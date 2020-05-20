#include <iostream>

using namespace std;

class Student
{
private:
	string _secondName;
	string _firstName;
	string _dateOfBirth;
	string _adress;
	string _phoneNumber;
	string _faculty;
	string _course;

public:
	Student(string secondName = "", string firstName = "", string dateOfBirth = "", string adress = "",
		string phoneNumber = "", string faculty = "", string course = "");

	string show();

	string GetSecondName();
	string GetFirstName();
	string GetDateOfBirth();
	string GetAdress();
	string GetPhoneNumber();
	string GetFaculty();
	string GetCourse();

	void SetSecondName();
	void SetFirstName();
	void SetDateOfBirth();
	void SetAdress();
	void SetPhoneNumber();
	void SetFaculty();
	void SetCourse();
};

