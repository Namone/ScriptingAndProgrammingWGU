#pragma once
#include "Student.h"

class Roster
{
public:
	Roster();
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
	);
	void remove(std::string studentId);
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void printAverageDaysInCourse(std::string studentId);

	void printAll();
	void printInvalidEmails();
	
	Student** getStudents() { return students; };
	void setStudents(Student** newStudents) { students = newStudents; };
private:
	Student** students = new Student*[5];
};

