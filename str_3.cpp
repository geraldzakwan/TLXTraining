#include <iostream>
#include <string>
using namespace std;

int main() {
  string s1, s2, s3, s4;
  cin >> s1;
  cin >> s2;
  cin >> s3;
  cin >> s4;

  int start = s1.find(s2);
  s1.erase(start, s2.length());
  start = s1.find(s3);

  cout << s1.substr(0, start + s3.length()) << s4 << s1.substr(start + s3.length(), s1.length() - start + s3.length()) << endl;

  return 0;
}
