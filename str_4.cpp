#include <iostream>
#include <string>
using namespace std;

int main() {
  string dengklek;

  cin >> dengklek;

  for (int i=0; i<dengklek.length(); i++) {
    char c = dengklek[i];
    if (islower(c)) {
      c = toupper(c);
      cout << c;
    } else if (isupper(c)) {
      c = tolower(c);
      cout << c;
    } else {
      cout << dengklek[i];
    }
  }

  cout << endl;

  return 0;
}
