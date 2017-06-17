#include <iostream>
#include <string>
using namespace std;

string is_palindrom(string pal) {
  if (pal.length() == 0 || pal.length() == 1) {
    return "YA";
  } else {
    if(pal[0] != pal[pal.length()-1]) {
      return "BUKAN";
    } else {
      return is_palindrom(pal.substr(1, pal.length()-2));
    }
  }
}

int main() {
  string pal;

  cin >> pal;

  cout << is_palindrom(pal) << endl;

  return 0;
}
