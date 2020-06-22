#pragma once
#include "Student.h"

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
	// void remove(std::string studentId);
	// void printByDegreeProgram(DegreeProgram degreeProgram);
	// void printAverageDaysInCourse(std::string studentId);

	void printAll() { 
		Student* studentData = this->getStudents();
		int total = sizeof(studentData);
		for(int s = 0; s <= total; s = s + 1) {
			std::cout << studentData[s].getStudentFirstName() << std::endl;
		}
	};
	void printInvalidEmails();
	
	Student* getStudents() { return students; };
	void setStudents(Student* newStudents) { students = newStudents; };
protected:
	Student* students;
};

