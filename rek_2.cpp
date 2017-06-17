#include <iostream>
#include <cmath>
using namespace std;

int kop_ung(int a, int b, int k, int x) {
  if (k==1) {
    return abs((a*x) + b);
  } else {
    int new_x = abs((a*x) + b);
    return kop_ung(a, b, k-1, new_x);
  }
}

int main() {
  int a, b, k, x;

  cin >> a;
  cin >> b;
  cin >> k;
  cin >> x;

  cout << kop_ung(a, b, k, x) << endl;

  return 0;
}
