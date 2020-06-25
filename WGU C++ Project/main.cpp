#include <iostream>
#include <vector>
#include <list>
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

// "Explodes" a string into an array based on a delimiter.
std::vector<std::string> explode(const std::string &delimiter, const std::string &stringToExplode) {
  std::vector<std::string> resultArray;
  int stringLength = stringToExplode.length();
  int delimiterLength = delimiter.length();
  if (delimiterLength == 0) {
    return resultArray;
  }

  int i = 0;
  int k = 0;
  while(i < stringLength){
      int j = 0;
      while (i + j < stringLength && j < delimiterLength && stringToExplode[i+j] == delimiter[j]) {
        j++;
      }
      if (j == delimiterLength) {
          resultArray.push_back(stringToExplode.substr(k, i - k));
          i += delimiterLength;
          k = i;
      }
      else {
          i++;
      }
  }
  resultArray.push_back(stringToExplode.substr(k, i - k));
  return resultArray;
}

int main() {
  std::cout << "Scripting and Programming - Applications – C867" << std::endl;
  std::cout << "C++" << std::endl;
  std::cout << "#000759349" << std::endl;
  std::cout << "Alex Nordhausen" << std::endl;

  Roster classRoster;
  classRoster.printAll();

  Student student;
  std::string *studentData = student.getStudentData();
  std::vector<std::string> data;

// A1
// John
// Smith
// John1989@gmail.com
// 20
// 30
// 35
// 40
// SECURITY
  for(int i = 0; i <= sizeof(studentData); i = i + 1) {
    std::vector<std::string> explodedData = explode(",", studentData[i]);
    std::vector<std::string>::iterator explodedIterator;
    
    std::string studentId;
    std::string firstName;
    std::string lastName;
    std::string email;
    int days1;
    int days2;
    int days3;
    int days4;
    DegreeProgram degreeProgram;
  
    for(int i = 0; i < explodedData.size(); ++i) {
      std::cout << i << std::endl;
      std::cout << explodedData[i] << std::endl;
    }

   // classRoster.add(studentId, firstName, lastName, email, days1, days2, days3, days4, degreeProgram);
    std::cout << "============" << std::endl;
  }

  //classRoster.printInvalidEmails();

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
}