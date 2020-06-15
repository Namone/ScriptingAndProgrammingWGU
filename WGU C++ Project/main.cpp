#include <iostream>
#include "Roster.h";
#include "Degree.h";

int main() {
  std::cout << "Welcome to student Rosterizer!" << std::endl;

  Roster *roster = new Roster();
  roster->add("1", "Alex", "Nordhausen", "anorthhouse@gmail.com",
  23, 40, 30, 20, DegreeProgram::SOFTWARE);

  std::cout << "Ending Rosterizier." << std::endl;
}
