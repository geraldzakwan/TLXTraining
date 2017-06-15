#include <iostream>
#include <string>
using namespace std;

char cipher(char x, int k) {
  int awal = int(x) - 97;
  int akhir = (awal + k) % 26;
  return char(akhir + 97);
}

int main() {
  string a;
  int k;
  cin >> a;
  cin >> k;

  for (int i=0; i<a.length(); i++) {
    cout << cipher(a[i], k);
  }

  cout << endl;

  return 0;
}
