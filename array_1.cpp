#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  string line;
  stack<string> s;
  while (getline(cin, line)) {
    s.push(line);
  }
  while (!s.empty()) {
    cout << s.top() << endl;
    s.pop();
  }
  return 0;
}
