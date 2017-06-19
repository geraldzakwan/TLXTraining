#include <iostream>
using namespace std;

int nearest_upper_pow_two(int m, int n) {
  int iter_m = 2, iter_n = 2;

  while (iter_m < m) {
    iter_m = iter_m * 2;
  }

  while (iter_n < n) {
    iter_n = iter_n * 2;
  }

  if(iter_m > iter_n) {
    return iter_m;
  } else {
    return iter_n;
  }
}

int is_homogen(int** arr, int m, int n) {
  int temp = arr[0][0];
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      if(arr[i][j]!=temp) {
        return false;
      }
    }
  }
  return true;
}

int encoding(int** arr, int m, int n) {
  if (is_homogen(arr, m, n)) {
    if (arr[0][0] == 1) {
      cout << "10" << endl;
      return 1;
    } else {
      cout << "10" << endl;
      return 0;
    }
  } else {
    return 0;
  }
}

int main() {
  int m, n;

  cin >> m;
  cin >> n;

  int p = nearest_upper_pow_two(m, n);

  int** quad_arr;
  quad_arr = new int*[p];
  for (int i=0; i<p; i++) {
    quad_arr[i] = new int[p];
  }

  for (int i=0; i<p; i++) {
    for (int j=0; j<p; j++) {
      quad_arr[i][j] = 0;
    }
  }

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin >> quad_arr[i][j];
    }
  }

  cout << encoding(quad_arr, p, p) << endl;

  return 0;
}

// for (int i=0; i<p; i++) {
//   for (int j=0; j<p; j++) {
//     cout << quad_arr[i][j] << " ";
//   }
//   cout << endl;
// }

// for (int i=0; i<m; i++) {
//   for (int j=0; j<n; j++) {
//     cout << quad_arr[i][j] << " ";
//   }
//   cout << endl;
// }
