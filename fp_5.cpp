#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N, D;

  cin >> N;
  cin >> D;

  int arrX[N];
  int arrY[N];

  for (int i=0; i<N; i++) {
    cin >> arrX[i];
    cin >> arrY[i];
  }

  int min = -1, max = -1, selisih = 0;

  for (int i=0; i<N-1; i++) {
    for (int j=1; j<N; j++) {
      if(i!=j) {
        selisih = pow(abs(arrX[i]-arrX[j]), D) + pow(abs(arrY[i]-arrY[j]), D);

        if (selisih < min || min < 0) {
          min = selisih;
        }

        if (selisih > max || max < 0) {
          max = selisih;
        }
      }
    }
  }

  cout << min << " " << max << endl;

  return 0;
}
