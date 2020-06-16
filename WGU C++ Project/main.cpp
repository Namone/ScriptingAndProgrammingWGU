#include <iostream>
#include "Roster.h"
#include "Degree.h"

int main() {
  Roster* roster = new Roster();
  std::cout << "Welcome to student Rosterizer!" << std::endl;

  roster->add("1", "Alex", "Nordhausen", "anorthhouse@gmail.com",
  23, 40, 30, 20, SOFTWARE);

  std::cout << "Ending Rosterizier." << std::endl;
}
