#include <iostream>
#include <string>
using namespace std;

int main() {
  string dengklek;

  cin >> dengklek;
  int i = 0;

  while (i<dengklek.length()) {
    char c = dengklek[i];
    if (isupper(c)) {
      c = tolower(c);
      cout << "_" << c;
    } else if (c == '_') {
      i++;
      char temp = dengklek[i];
      temp = toupper(temp);
      cout << temp;
    } else {
      cout << c;
    }
    i++;
  }

  cout << endl;

  return 0;
}
