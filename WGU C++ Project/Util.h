#pragma once
#include <iostream>
#include <vector>

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

// Determine if a given input string is a valid e-mail address.
bool isValidEmail(std::string input) {
    size_t at = input.find('@');
    if (at == std::string::npos) {
        // std::cout << "Missing @ symbol\n";
        return false;
    }

    size_t dot = input.find('.', at + 1);
    if (dot == std::string::npos) {
        // std::cout << "Missing . symbol after @\n";
        return false;
    }

    return true;
};

void printClassInfo() {
  std::cout << "Scripting and Programming - Applications – C867" << std::endl;
  std::cout << "C++" << std::endl;
  std::cout << "#000759349" << std::endl;
  std::cout << "Alex Nordhausen" << "\n\n";

  return;
}