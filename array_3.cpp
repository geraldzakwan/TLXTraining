#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  int m, n;

  cin >> m;
  cin >> n;

  int mat[m][n];

  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      cin >> mat[i][j];
    }
  }

  for (int j=0; j<n; j++) {
    for (int i=m-1; i>-1; i--) {
      if(i==0) {
          cout << mat[i][j];
      } else {
          cout << mat[i][j] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
