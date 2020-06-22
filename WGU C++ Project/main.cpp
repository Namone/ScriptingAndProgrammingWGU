#include <iostream>
#include "Roster.h"
#include "Degree.h"

int main() {
  Roster classRoster;
  std::cout << "Welcome to student Rosterizer!" << std::endl;

  // classRoster.add("1", "Alex", "Nordhausen", "anorthhouse@gmail.com",
  // 23, 40, 30, 20, SOFTWARE);


  Student student;
  std::string* studentData = student.getStudentData();

  for(int i = 0; i <= sizeof(studentData); i = i + 1) {
    std::cout << studentData[i] << std::endl;
  }
  //classRoster.printAll();
  // classRoster.printInvalidEmails();
  // loop through classRosterArray and for each element:

    // classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    // classRoster.printByDegreeProgram(SOFTWARE);
    // classRoster.remove("A3");
    // classRoster.printAll();
    // classRoster.remove("A3");

  // expected: the above line should print a message saying such a student with this ID was not found.

  // Implement the destructor to release the memory that was allocated dynamically in Roster.
  std::cout << "Ending Rosterizier." << std::endl;
}
