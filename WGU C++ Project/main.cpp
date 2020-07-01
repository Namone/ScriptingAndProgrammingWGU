#include <iostream>
#include <vector>
#include <list>
#include "Roster.h"
#include "Degree.h"
#include "Util.h"

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

void addAllStudents(std::string *studentData, Roster &classRoster) {
  for(int i = 0; i <= sizeof(studentData); i = i + 1) {
    std::vector<std::string> explodedData = explode(",", studentData[i]);

    std::string studentId = explodedData[0];
    std::string firstName = explodedData[1];
    std::string lastName = explodedData[2];
    std::string email = explodedData[3];
    int days1 = std::stoi(explodedData[4]);
    int days2 = std::stoi(explodedData[5]);
    int days3 = std::stoi(explodedData[6]);
    int days4 = std::stoi(explodedData[7]);
    DegreeProgram degreeProgram = degreeProgramMap()[explodedData[8]];

   classRoster.add(studentId, firstName, lastName, email, days1, days2, days3, days4, degreeProgram);
  }
  return;
}

int main() {
  Student student;
  Roster classRoster;

  printClassInfo();
  std::string studentData[] = {
    "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
    "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
    "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
    "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
    "A5,Alex,Nordhausen,anorthhouse@gmail.com,23,40,24,32,SOFTWARE"
  };

  int length = sizeof(studentData) / sizeof(studentData[0]);
  classRoster.printAll(studentData, length);

  //addAllStudents(studentData, classRoster);

  classRoster.printInvalidEmails();

  std::list<Student> students = classRoster.getStudents();
	std::list<Student>::iterator studentIterator;
  // loop through classRosterArray and for each element:
  for (studentIterator = students.begin(); studentIterator != students.end(); studentIterator++) {
    //Print the name of our newly added student.
    //std::cout << studentIterator->getStudentFirstName() << std::endl;

    // classRoster.printAverageDaysInCourse(/*current_object's student id*/);
    // classRoster.printByDegreeProgram(SOFTWARE);
    // classRoster.remove("A3");
    // classRoster.printAll();
    // classRoster.remove("A3");
  }

  // expected: the above line should print a message saying such a student with this ID was not found.

  // Implement the destructor to release the memory that was allocated dynamically in Roster.
  std::cout << "Ending Rosterizier." << std::endl;

  return 0;
}
