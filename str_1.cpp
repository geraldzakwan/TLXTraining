#include <iostream>
#include <string>
using namespace std;

int main() {
  string a, b;
  cin >> a;
  cin >> b;

  int length_b = b.length();
  int start = a.find(b);
  
  while (start!=-1) {
    a.erase(start, length_b);
    start = a.find(b);
  }

  cout << a << endl;

  return 0;
}
