#pragma once
#include <string>
#include "Degree.h"

class Student
{
public:
	// Constructor
	// Student();
	// // Deconstructor
	// ~Student();
	// Our accessors for integer variables
	std::string getStudentId() { return id; };
	int getStudentAge() { return age; };
	int* getNumberOfDaysToComplete() { return numberOfDaysToComplete; };

	// Our accessors for our string variables
	std::string getStudentFirstName() { return firstName; };
	std::string getStudentLastName() { return lastName; };
	std::string getDegreeProgram() { return degreeProgram; };
	std::string getEmailAddress() { return emailAddress; }
	std::string* getStudentData() { return studentData; };

	// Our mutators for integer variables
	void setStudentId(std::string studentId) { id = studentId; };
	void setStudentAge(int studentAge) { age = studentAge; };
	//void setNumberOfDaysToComplete(int[5] updatedNumberOfDays) { numberOfDaysToComplete = updatedNumberOfDays; };

	void setStudentFirstName(std::string studentFirstName) { firstName = studentFirstName; };
	void setStudentLastName(std::string studentLastName) { lastName = studentLastName; };
	void setEmailAddress(std::string studentEmailAddress) { emailAddress = studentEmailAddress; };
	void setDegreeProgram(DegreeProgram studentDegreeProgram) { degreeProgram = studentDegreeProgram; };
	// Our mutators for string variables
private:
	// Declare our integer variables
	std::string id;
	int age;
	int numberOfDaysToComplete[5];

	// Declare our string variables
	std::string firstName;
	std::string lastName;
	std::string degreeProgram;
	std::string emailAddress;
	std::string studentData[5];
};