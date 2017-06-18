#include <iostream>
using namespace std;

int count_all_stars(int** arr, int m, int n, int b, int k, bool** visited_node, int curr) {
  // Cek indeks valid
  if (b>-1 && b<m && k>-1 && k<n) {
    // Cek udh visited ato belom
    if (!visited_node[b][k]) {
      visited_node[b][k] = true;
      // Cek dia bintang apa bukan
      if (arr[b][k] == curr) {
        // Ret 1 + top + left + right + bot
        int top = count_all_stars(arr, m, n, b-1, k, visited_node, curr);
        int bot = count_all_stars(arr, m, n, b+1, k, visited_node, curr);
        int left = count_all_stars(arr, m, n, b, k-1, visited_node, curr);
        int right = count_all_stars(arr, m, n, b, k+1, visited_node, curr);
        return 1 + top + bot + left + right;
      } else {
        return 0;
      }
    } else {
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

  int** jaw_arr;
  jaw_arr = new int*[m];

  for (int i=0; i<m; i++) {
    jaw_arr[i] = new int[n];
  }

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin >> jaw_arr[i][j];
    }
  }

  int b, k;

  cin >> b;
  cin >> k;

  int curr = jaw_arr[b][k];

  bool** visited_node;
  visited_node = new bool*[m];

  for (int i=0; i<m; i++) {
    visited_node[i] = new bool[n];
  }

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      visited_node[i][j] = false;
    }
  }

  int t = count_all_stars(jaw_arr, m, n, b, k, visited_node, curr);

  cout << t*(t-1) << endl;
  return 0;
}

// bool isTop = false, isBot = false, isLeft = false, isRight = false;

// if(arr[b][k] == curr) {
//   if (b>0) {
//     if (arr[b-1][k] == curr && !visited_node[b-1][k]) {
//       isTop = true;
//     }
//   }
//
//   if (b<m-1) {
//     if (arr[b+1][k] == curr && !visited_node[b+1][k]) {
//       isBot = true;
//     }
//   }
//
//   if (k>0) {
//     if (arr[b][k-1] == curr && !visited_node[b][k-1]) {
//       isLeft = true;
//     }
//   }
//
//   if (k<n-1) {
//     if (arr[b][k+1] == curr && !visited_node[b][k+1]) {
//       isRight = true;
//     }
//   }
//
//   return
//
//   // if (isTop) {
//   //   if (isBot) {
//   //     if (isRight) {
//   //       if (isLeft) {
//   //
//   //       } else {
//   //
//   //       }
//   //     } else {
//   //
//   //     }
//   //   } else {
//   //
//   //   }
//   // } else {
//   //
//   // }
// } else {
//   return 0;
// }
