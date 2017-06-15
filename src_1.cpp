#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int N, patokan;

  cin >> N;
  cin >> patokan;

  int arr[N];

  for (int i=0; i<N; i++) {
    cin >> arr[i];
  }

  int min = -1, diff = 0, curr = 0;

  for (int i=0; i<N; i++) {
    diff = abs(patokan - arr[i]);
    if(min == -1) {
      min = diff;
      curr = arr[i];
    } else if (diff < min) {
      min = diff;
      curr = arr[i];
    } else if (diff == min) {
      if(arr[i] < curr) {
        min = diff;
        curr = arr[i];
      }
    }
  }

  cout << curr << endl;
  return 0;
}
