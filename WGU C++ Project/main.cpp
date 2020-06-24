#include <iostream>
#include "Roster.h"
#include "Degree.h"

// Demonstrate the program’s required functionality by adding a main() function in main.cpp, which will contain the required function calls to achieve the following results:
// 1.  Print out to the screen, via your application, the course title, the programming language used, your WGU student ID, and your name.
// 2.  Create an instance of the Roster class called classRoster.
// 3.  Add each student to classRoster.
// 4.  Convert the following pseudo code to complete the rest of the  main() function:
// classRoster.printAll();
// classRoster.printInvalidEmails();
// //loop through classRosterArray and for each element:
// classRoster.printAverageDaysInCourse(/*current_object's student id*/);
// classRoster.printByDegreeProgram(SOFTWARE);
// classRoster.remove("A3");
// classRoster.printAll();
// classRoster.remove("A3");
// //expected: the above line should print a message saying such a student with this ID was not found.
// 5.  Implement the destructor to release the memory that was allocated dynamically in Roster.

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
