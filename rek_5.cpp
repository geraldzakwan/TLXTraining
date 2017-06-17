#include <iostream>
#include <string>
using namespace std;

string kon_des_bin(int des) {
  if (des == 0) {
    return "0";
  } else if (des == 1) {
    return "1";
  } else {
    if (des % 2 == 0) {
      return kon_des_bin(des/2) + "0";
    } else {
      return kon_des_bin(des/2) + "1";
    }
  }
}

int main() {
  int des;

  cin >> des;

  cout << kon_des_bin(des) << endl;

  return 0;
}
