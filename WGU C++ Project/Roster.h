#ifndef ROSTER_H
#define ROSTER_H

#pragma once
#include <list>
#include <iostream>
#include <string>
#include "Student.h"
#include "Degree.h"
#include "Util.h"

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
	~Roster();

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
		// First, create our new student object.
		Student *student = new Student(studentId, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);

		std::cout << "Adding student with email: " << student->getEmailAddress() << std::endl;
		classRosterArray.push_back(*student);
	};
	void remove(std::string studentId, std::list<Student> &students) {
		std::list<Student>::iterator student;
		bool wasRemoved = false;
		for (student = students.begin(); student != students.end();) {
			if (studentId == student->getStudentId()) {
				// Print out who we are about to remove.
				std::cout << "Removing " + student->getStudentFirstName() << std::endl;
				student = students.erase(student);
				setStudents(students);
				wasRemoved = true;
			}
			else {
				++student;
			}
		}

		if(!wasRemoved) {
			std::cout << "The student with ID " << studentId << " no longer exists and was not removed/erased." << std::endl;
		}

		std::cout << std::endl;
	};
	void printByDegreeProgram(DegreeProgram degreeProgram) {
		std::cout << "Printing students by degree program " << degreeProgram << ":" << std::endl;
		std::list<Student> students = getStudents();
		std::list<Student>::iterator student;
		for (student = students.begin(); student != students.end(); student++) {
			if (degreeProgram == student->getDegreeProgram()) {
				continue;
			}

			// Print the name of our student by degree program.
			std::cout << student->getStudentFirstName() + " " + student->getStudentLastName() << std::endl;
		}

		std::cout << std::endl;
	};
	void printAverageDaysInCourse(std::string studentId) {
		std::cout << "Printing average days in course for student " << studentId + ": " << std::endl;
		std::list<Student> students = getStudents();
		std::list<Student>::iterator student;
		for (student = students.begin(); student != students.end(); student++) {
			if(studentId != student->getStudentId()) {
				continue;
			}
			int* averageDaysInCourse = student->getNumberOfDaysToComplete();

			int sum = 0;
			int avg = 0;
			for(unsigned int i = 0; i < student->size; i++) {
				sum = sum + averageDaysInCourse[i];
			}
			avg = sum / student->size;
			std::cout << student->getStudentFirstName() + ": " << avg << std::endl;
		}
		std::cout << std::endl;
	};
	void printAll() {
		std::cout << "Printing all students:" << std::endl;
		std::list<Student> students = getStudents();
		std::list<Student>::iterator student;
		for (student = students.begin(); student != students.end(); student++) {
			student->print();
		}

		std::cout << std::endl;
	};
	void printInvalidEmails() {
		printf("\nPrinting invalid e-mails from class roster:\n");
		std::list<Student>::iterator currentStudent;
		for(currentStudent = classRosterArray.begin(); currentStudent != classRosterArray.end(); currentStudent++) {
			bool isValid = isValidEmail(currentStudent->getEmailAddress());
			if(isValid) {
				continue;
			}

			std::cout << currentStudent->getEmailAddress() << std::endl;
		}
		return;
	};

	std::list<Student> getStudents() { return classRosterArray; };
	void setStudents(std::list<Student> newStudents) { classRosterArray = newStudents; };
protected:
	std::list<Student> classRosterArray;
};
#endif
