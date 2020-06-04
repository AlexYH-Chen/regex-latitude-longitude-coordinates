#include <cstdio>
#include <iostream>
#include <regex>

using namespace std;


int main() {

  string coordinate;
  smatch match;
  regex re("\\("
           "[+-]?"
           "("
           "90(\\.0+)?|"
           "[1-8][0-9](\\.[0-9]+)?|"
           "[0-9](\\.[0-9]+)?"
           ")"
           ", "
           "[+-]?"
           "("
           "180(\\.0+)?|"
           "1[0-7][0-9](\\.[0-9]+)?|"
           "[1-9][0-9](\\.[0-9]+)?|"
           "[0-9](\\.[0-9]+)?"
           ")"
           "\\)");

  while (getline(cin, coordinate)) {
    if (regex_search(coordinate, match, re)) {
      cout << "Valid" << endl;
    } else {
      cout << "Invalid" << endl;
    }
  };

  return 0;
}