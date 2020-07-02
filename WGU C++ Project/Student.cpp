#include "Student.h"

Student::Student(
  std::string studentId,
  std::string firstName,
  std::string lastName,
  std::string emailAddress,
  int age,
  int daysInCourse1,
  int daysInCourse2,
  int daysInCourse3,
  DegreeProgram degreeProgram) {
    this->setStudentId(studentId);
    this->setStudentFirstName(firstName);
    this->setStudentLastName(lastName);
    this->setStudentAge(age);
    this->setEmailAddress(emailAddress);
    this->setDegreeProgram(degreeProgram);

    int daysInCourse[] = {
        daysInCourse1,
        daysInCourse2,
        daysInCourse3};

    this->setNumberOfDaysToComplete(daysInCourse);
}

Student::~Student() {
  // Destructor any dynamically allocated data, here.
}

void Student::print() {
  std::cout << this->getStudentId() << "\t";
  std::cout << "First name: " << this->getStudentFirstName() << "\t";
  std::cout << "Last name: " << this->getStudentLastName() << "\t";
  std::cout << "E-mail address: " << this->getEmailAddress() << "\t";
  std::cout << "Age: " << this->getStudentAge() << "\t";
  std::cout << "daysInCourse: "
            << "{";
  for (unsigned int i = 0; i < size; i++)
  {
    std::cout << this->getNumberOfDaysToComplete()[i];
    if (i != (size - 1))
    {
      std::cout << ",";
    }
  }
  std::cout << "}"
            << "\t";
  std::cout << "Degree program: " << this->getDegreeProgram() << std::endl;
};
