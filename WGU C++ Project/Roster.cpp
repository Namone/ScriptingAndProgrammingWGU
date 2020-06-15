#include <iostream>
#include "Roster.h"

Roster::Roster() {

}

Roster::~Roster() {

}

void Roster::add(
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
    Student *student = new Student();
    student->setStudentId(studentId);
    student->setStudentFirstName(firstName);
    student->setStudentLastName(lastName);
    student->setStudentAge(age);
    student->setEmailAddress(emailAddress);
    student->setDegreeProgram(degreeProgram);

    std::cout << "Adding student with email: " << student->getEmailAddress() << std::endl;
}

void Roster::remove(std::string studentId) {

}