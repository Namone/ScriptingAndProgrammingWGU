#pragma once
#include <string>
#include "Degree.h";

class Student
{
public:
	// Constructor
	Student();
	// Deconstructor
	~Student();
protected:
	// Our accessors for integer variables
	int getStudentId() { return id; };
	int getStudentAge() { return age; };
	int* getNumberOfDaysToComplete() { return numberOfDaysToComplete; };

	// Our accessors for our string variables
	std::string getStudentFirstName() { return firstName; };
	std::string getStudentLastName() { return lastName; };
	std::string getDegreeProgram() { return degreeProgram; };
	std::string getEmailAddress() { return emailAddress; }
	std::string* getStudentData() { return studentData; };

	// Our mutators for integer variables
	void setStudentId(int studentId) { id = studentId; };
	void setStudentAge(int studentAge) { age = studentAge; };
	//void setNumberOfDaysToComplete(int[5] updatedNumberOfDays) { numberOfDaysToComplete = updatedNumberOfDays; };

	void setStudentFirstName(std::string studentFirstName) { firstName = studentFirstName; };
	void setStudentLastName(std::string studentLastName) { lastName = studentLastName; };
	void setEmailAddress(std::string studentEmailAddress) { emailAddress = studentEmailAddress; };
	void setDegreeProgram(DegreeProgram studentDegreeProgram) { degreeProgram = studentDegreeProgram; };
	// Our mutators for string variables
private:
	// Declare our integer variables
	int id;
	int age;
	int numberOfDaysToComplete[5];

	// Declare our string variables
	std::string firstName;
	std::string lastName;
	std::string degreeProgram;
	std::string emailAddress;
	std::string studentData[5] = {
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Alex,Nordhausen,anordha@wgu.edu,23,21,45,52,30,SOFTWARE"
	};
};