#pragma once
#include "Student.h"

// Create a Roster class (roster.cpp) by doing the following:
// 1.  Create an array of pointers, classRosterArray, to hold the data provided in the “studentData Table.”
// 2.  Create a student object for each student in the data table and populate classRosterArray.
// a.  Parse each set of data identified in the “studentData Table.”
// b.  Add each student object to classRosterArray.
// 3.  Define the following functions:
// a.  public void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram)  that sets the instance variables from part D1 and updates the roster.
// b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
// c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
// d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
// e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
// Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
// f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.

class Roster
{
public:
	void add(
		std::string studentId, 
		std::string firstName, 
		std::string lastName, 
		std::string emailAddress, 
		int age, 
		int daysInCourse1, 
		int daysInCourse2, 
		int daysInCourse3, 
		DegreeProgram degreeProgram
	) {
		std::cout << "In add() function!";
		// First, create our new student object.
		Student *student = new Student();
		student->setStudentId(studentId);
		student->setStudentFirstName(firstName);
		student->setStudentLastName(lastName);
		student->setStudentAge(age);
		student->setEmailAddress(emailAddress);
		student->setDegreeProgram(degreeProgram);

		std::cout << "Adding student with email: " << student->getEmailAddress() << std::endl;
	}
	// void remove(std::string);
	// void printByDegreeProgram(DegreeProgram degreeProgram);
	// void printAverageDaysInCourse(std::string studentId);
	void printAll() { 
		Student student;
		std::string* studentData = student.getStudentData();
		for(int i = 0; i <= sizeof(studentData); i = i + 1) {
			std::cout << studentData[i] << std::endl;
		}
	};
	void printInvalidEmails() {
		Student student;
		std::string* studentData = student.getStudentData();
		for(int i = 0; i <= sizeof(studentData); i = i + 1) {
			bool isValid = this->isValidEmail(studentData[i]);
			std::cout << isValid << std::endl;
		}
	};
	bool isValidEmail(std::string input) {
		size_t at = input.find('@');
		if (at == std::string::npos) {
			std::cout << "Missing @ symbol\n";
			return false;
		}

		size_t dot = input.find('.', at + 1);
		if (dot == std::string::npos) {
			std::cout << "Missing . symbol after @\n";
			return false;
		}

		return true;
	};
	
	Student* getStudents() { return classRosterArray; };
	void setStudents(Student* newStudents) { classRosterArray = newStudents; };
protected:
	Student* classRosterArray;
};

