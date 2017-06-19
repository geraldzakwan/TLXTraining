#include <iostream>
#include <vector>
#include <string>
using namespace std;

int count_1 = 0;
vector<string> s;

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

int** pecah(int** arr, int p, int pos) {
  int** r_arr;
  r_arr = new int*[p];

  for (int i=0; i<p; i++) {
    r_arr[i] = new int[p];
  }

  if(pos == 0) {
    for (int i=0; i<p; i++) {
      for (int j=0; j<p; j++) {
        r_arr[i][j] = arr[i][j];
      }
    }
  } else if (pos == 1) {
    for (int i=0; i<p; i++) {
      for (int j=0; j<p; j++) {
        r_arr[i][j] = arr[i][j+p];
      }
    }
  } else if (pos == 2) {
    for (int i=0; i<p; i++) {
      for (int j=0; j<p; j++) {
        r_arr[i][j] = arr[i+p][j];
      }
    }
  } else if (pos == 3) {
    for (int i=0; i<p; i++) {
      for (int j=0; j<p; j++) {
        r_arr[i][j] = arr[i+p][j+p];
      }
    }
  }

  return r_arr;
}

void encoding(int** arr, int p, string prefix) {
  if (is_homogen(arr, p, p)) {
    if (arr[0][0] == 1) {
      if (prefix == "x") {
        // ret_arr[count_1] = "1";
        s.push_back("1");
      } else {
        // ret_arr[count_1] = "1" + prefix;
        s.push_back("1" + prefix);
      }
      count_1++;
    } else {
      //homogen 0, biarin aja
    }
  } else {
    //pecah
    int p_2 = p/2;
    int ** arr_0 = pecah(arr, p_2, 0);
    int ** arr_1 = pecah(arr, p_2, 1);
    int ** arr_2 = pecah(arr, p_2, 2);
    int ** arr_3 = pecah(arr, p_2, 3);

    if(prefix == "x") {
      encoding(arr_0, p_2, "0");
      encoding(arr_1, p_2, "1");
      encoding(arr_2, p_2, "2");
      encoding(arr_3, p_2, "3");
    } else {
      encoding(arr_0, p_2, prefix + "0");
      encoding(arr_1, p_2, prefix + "1");
      encoding(arr_2, p_2, prefix + "2");
      encoding(arr_3, p_2, prefix + "3");
    }

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

  encoding(quad_arr, p, "x");
  cout << count_1 << endl;
  for (int i=0; i<count_1; i++) {
    cout << s[i] << endl;
  }

  return 0;
}
