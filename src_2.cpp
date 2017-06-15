#include <iostream>
#include <cmath>
using namespace std;

int multiplyTetangga(int N, int M, int i, int j, int arr[][100]) {
  //Kiri, Kanan, Atas, Bawah
  int t1 = 1, t2 = 1, t3 = 1, t4 = 1;
  // cout << i << ", " << j << " : " << arr[i][j] << endl;

  if (j > 0) {
    t1 = arr[i][j-1];
  }

  if (j < M-1) {
    t2 = arr[i][j+1];
  }

  if (i > 0) {
    t3 = arr[i-1][j];
  }

  if (i < N-1) {
    t4 = arr[i+1][j];
  }

  // cout << t1 << ", " << t2 << ", " << t3 << ", " << t4 << endl;

  return t1*t2*t3*t4;
}

int main() {
  int N, M, K;

  cin >> N;
  cin >> M;
  cin >> K;

  int arr[N][100];

  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      cin >> arr[i][j];
    }
  }

  int min = -1, diff = 0, currRow = 0, currCol = 0;
  int list_row[N*M];
  int list_col[N*M];
  int iter = 0;

  for (int i=0; i<N; i++) {
    for (int j=0; j<M; j++) {
      diff = multiplyTetangga(N, M, i, j, arr);
      if (diff == K) {
        list_row[iter] = i;
        list_col[iter] = j;
        iter++;
      }
    }
  }

  if(iter == 0) {
    cout << "0 0" << endl;
    return 0;
  }

  int min_col = 200;
  for (int i=0; i<iter; i++) {
    if(list_col[i] < min_col) {
        min_col = list_col[i];
    }
    // cout << list_row[i] << ", " << list_col[i] << endl;
  }

  // cout << min_col << "haia1" << endl;

  int list_row_2[N*M];
  int list_col_2[N*M];
  int iter2 = 0;

  for (int i=0; i<iter; i++) {
    if(list_col[i] == min_col) {
        list_row_2[iter2] = list_row[i];
        list_col_2[iter2] = list_col[i];
        iter2++;
    }
    // cout << list_row[i] << ", " << list_col[i] << endl;
  }

  if(iter2 == 1) {
    cout << list_row_2[0] + 1 << " " << list_col_2[0] + 1 << endl;
    return 0;
  }

  int min_row = 200;
  for (int i=0; i<iter2; i++) {
    if(list_row_2[i] < min_row) {
        min_row = list_row_2[i];
    }
    // cout << list_row[i] << ", " << list_col[i] << endl;
  }

  // cout << min_row << "haia2" << endl;

  int list_row_3[N*M];
  int list_col_3[N*M];
  int iter3 = 0;

  for (int i=0; i<iter2; i++) {
    if(list_row_2[i] == min_row) {
        list_row_3[iter3] = list_row_2[i];
        list_col_3[iter3] = list_col_2[i];
        iter3++;
    }
    // cout << list_row[i] << ", " << list_col[i] << endl;
  }

  cout << list_row_3[0] + 1 << " " << list_col_3[0] + 1 << endl;

  return 0;
}
