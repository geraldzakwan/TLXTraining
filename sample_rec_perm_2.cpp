#include <stdio.h>
#include <iostream>
using namespace std;

bool zig_zag_check(int* arr, int n) {
  bool is_zig_zag = true;
  for (int i=1; i<n-1; i++) {
    if(!((arr[i+1] > arr[i] && arr[i-1] > arr[i]) || (arr[i+1] < arr[i] && arr[i-1] < arr[i]))) {
      is_zig_zag = false;
    }
  }
  return is_zig_zag;
}

void print(const int *v, const int size)
{
  if (v != 0) {
    for (int i = 0; i < size; i++) {
      printf("%d", v[i] );
    }
    printf("\n");
  }
} // print


void swap(int *v, const int i, const int j)
{
  int t;
  t = v[i];
  v[i] = v[j];
  v[j] = t;
}


void rotateLeft(int *v, const int start, const int n)
{
  int tmp = v[start];
  for (int i = start; i < n-1; i++) {
    v[i] = v[i+1];
  }
  v[n-1] = tmp;
} // rotateLeft


void permute(int *v, const int start, const int n)
{
  // if(zig_zag_check(v, n)) {
  //     print(v, n);
  // }
  print(v, n);
  if (start < n) {
    int i, j;
    for (i = n-2; i >= start; i--) {
      for (j = i + 1; j < n; j++) {
	       swap(v, i, j);
	        permute(v, i+1, n);
      } // for j
      rotateLeft(v, i, n);
    } // for i
  }
} // permute

int main() {
  int n;
  cin >> n;
  int* arr;
  arr = new int[n];

  for (int i=0; i<n; i++) {
    arr[i] = i + 1;
  }

  permute(arr, 0, n);
  return 0;
}
