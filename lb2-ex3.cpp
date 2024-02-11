#include <iostream>
#include <string>
using namespace std;


bool isComment(string input) {

  if (input.empty()) return false;

  if (input.substr(0, 2) == "//") return true;
   if (input.substr(0, 2) == "/*") {

    size_t pos = input.find("*/");

    if (pos == string::npos) return false;

    for (size_t i = pos + 2; i < input.length(); i++) {

      if (!isspace(input[i])) return false;
    }

    return true;
  }

  return false;
}


int main() {

  string input;

  getline(cin, input);

  bool result = isComment(input);

  cout << (result ? "The input is a comment line." : "The input is not a comment line.") << endl;

  return 0;
}

