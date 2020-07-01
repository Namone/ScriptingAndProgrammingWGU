#pragma once
#include <string>
#include "Degree.h"

// For the Student class, do the following:
// 1.  Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
// •  student ID
// •  first name
// •   last name
// •  email address
// •  age
// •  array of number of days to complete each course
// •  degree program
// 2.  Create each of the following functions in the Student class:
// a.  an accessor (i.e., getter) for each instance variable from part D1
// b.  a mutator (i.e., setter) for each instance variable from part D1
// c.  All external access and changes to any instance variables of the Student class must be done using accessor and mutator functions.
// d.  constructor using all of the input parameters provided in the table
// e.  print() to print specific student data

class Student
{
public:
	// Constructor
	//Student();
	// // Deconstructor
	//~Student();
	// Our accessors for integer variables
	std::string getStudentId() { return id; };
	int getStudentAge() { return age; };
	int* getNumberOfDaysToComplete() { return numberOfDaysToComplete; };

	// Our accessors for our string variables
	std::string getStudentFirstName() { return firstName; };
	std::string getStudentLastName() { return lastName; };
	DegreeProgram getDegreeProgram() { return degreeProgram; };
	std::string getEmailAddress() { return emailAddress; }

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
	DegreeProgram degreeProgram;
	std::string emailAddress;
};
