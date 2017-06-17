#include <iostream>
using namespace std;

int fak_uy(int bil) {
  if(bil == 1) {
    return 1;
  } else if (bil % 2 == 1) {
    return bil * fak_uy(bil - 1);
  } else {
    return bil / 2 * fak_uy(bil - 1);
  }
}

int main() {
  int bil;

  cin >> bil;

  cout << fak_uy(bil) << endl;

  return 0;
}
