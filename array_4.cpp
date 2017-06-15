#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  int m, n, o;

  cin >> m;
  cin >> n;
  cin >> o;

  int mat[m][n];
  int mat2[n][o];
  int res[m][o];

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin >> mat[i][j];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<o; j++) {
      cin >> mat2[i][j];
    }
  }

  for (int i=0; i<m; i++) {
    for (int j=0; j<o; j++) {
        res[i][j] = 0;
    }
  }

  for(int i=0; i<m; ++i)
        for(int j=0; j<o; ++j)
            for(int k=0; k<n; ++k)
            {
                res[i][j] += mat[i][k] * mat2[k][j];
            }

  for (int i=0; i<m; i++) {
    for (int j=0; j<o; j++) {
      if (j==o-1) {
        cout << res[i][j];
      } else {
        cout << res[i][j] << " ";
      }
    }
    cout << endl;
  }

  // for (int j=0; j<o; j++) {
  //   for (int i=m-1; i>-1; i--) {
  //     if(i==0) {
  //         cout << res[i][j];
  //     } else {
  //         cout << res[i][j] << " ";
  //     }
  //   }
  //   cout << endl;
  // }

  return 0;
}
