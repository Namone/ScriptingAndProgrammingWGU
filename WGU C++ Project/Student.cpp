#include "Student.h"

// Class constructor
Student::Student() {
	
}

// Class deconstructor
Student::~Student() {

}

std::string Student::getStudentId() { return id; };
int Student::getStudentAge() { return age; };
int* Student::getNumberOfDaysToComplete() { return numberOfDaysToComplete; };

// Our accessors for our string variables
std::string Student::getStudentFirstName() { return firstName; };
std::string Student::getStudentLastName() { return lastName; };
std::string Student::getDegreeProgram() { return degreeProgram; };
std::string Student::getEmailAddress() { return emailAddress; }
std::string* Student::getStudentData() { return studentData; };

// Our mutators for integer variables
void Student::setStudentId(std::string studentId) { id = studentId; };
void Student::setStudentAge(int studentAge) { age = studentAge; };
//void setNumberOfDaysToComplete(int[5] updatedNumberOfDays) { numberOfDaysToComplete = updatedNumberOfDays; };

void Student::setStudentFirstName(std::string studentFirstName) { firstName = studentFirstName; };
void Student::setStudentLastName(std::string studentLastName) { lastName = studentLastName; };
void Student::setEmailAddress(std::string studentEmailAddress) { emailAddress = studentEmailAddress; };
void Student::setDegreeProgram(DegreeProgram studentDegreeProgram) { degreeProgram = studentDegreeProgram; };