#include <iostream>
#include <cmath>
using namespace std;

int func(int A, int B, int x) {
  return abs(A*x + B);
}

int compfunc(int A, int B, int x, int K) {
  int res = x;
  for (int i=0; i<K; i++) {
    res = func(A, B, res);
  }
  return res;
}

int main() {
  int A, B, x, K;

  cin >> A;
  cin >> B;
  cin >> K;
  cin >> x;

  cout << compfunc(A, B, x, K) << endl;

  return 0;
}
