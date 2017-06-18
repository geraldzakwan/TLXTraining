#include <iostream>
#include <string>
using namespace std;

bool zig_zag_check(int arr[], int n) {
  bool is_zig_zag = true;
  for (int i=1; i<n-1; i++) {
    if(!((arr[i+1] > arr[i] && arr[i-1] > arr[i]) || (arr[i+1] < arr[i] && arr[i-1] < arr[i]))) {
      is_zig_zag = false;
    }
  }
  return is_zig_zag;
}

bool zig_zag_check_2(string arr) {
  bool is_zig_zag = true;
  for (int i=1; i<arr.length()-1; i++) {
    if(!((arr[i+1] - '0' > arr[i] - '0' && arr[i-1] - '0' > arr[i] - '0') || (arr[i+1] - '0' < arr[i] - '0' && arr[i-1] - '0' < arr[i] - '0'))) {
      is_zig_zag = false;
      break;
    }
  }
  return is_zig_zag;
}

int faktorial(int n) {
  if(n == 0) {
    return 1;
  } else {
    return n * faktorial(n-1);
  }
}

int main() {
  int n;

  cin >> n;

  int arr[n];

  for (int i=0; i<n; i++) {
    arr[i] = i+1;
  }

  int count_all_perm = faktorial(n);
  string all_perm[count_all_perm];

  for (int i=0; i<)

  return 0;
}
