#include <iostream>
#include <string>
#include <map>
using namespace std;

// int searchPhoneNumber(int n, string name_list[], int phone_list[], string name) {
//   bool found = false, passed = false;
//   int ret = -1;
//
//   int k = 0;
//   while (k<n && !found && !passed) {
//     if (name_list[k] == name) {
//       found = true;
//       ret = phone_list[k];
//     }
//     else if (name_list[k] > name) {
//       passed = true;
//     }
//     else {
//       k++;
//     }
//   }
//
//   return ret;
// }

int binarySearchForLeftRange(string a[], int length, string left_range) {
    if (a[length-1] < left_range)
        return -1;

    int low = 0;
    int high = length-1;

    while (low<=high)
    {
        int mid = low+((high-low)/2);

        if(a[mid] >= left_range)
            high = mid-1;
        else //if(a[mid]<i)
            low = mid+1;
    }

    return high+1;
}

int main() {
  int n, q;

  cin >> n;
  cin >> q;

  map<string, int> m;

  string name_list[n];
  int phone_list[n];

  for (int i=0; i<n; i++) {
    cin >> name_list[i];
    cin >> phone_list[i];
    // string a;
    // int b;
    // cin >> a;
    // cin >> b;
    // m[a] = b;
  }

  string query_list[q];
  for (int i=0; i<q; i++) {
    cin >> query_list[i];
  }

  for (int i=0; i<q; i++) {
    // int ret = searchPhoneNumber(n, name_list, phone_list, query_list[i]);
    // if (ret == -1) {
    //   cout << "NIHIL" << endl;
    // } else {
    //   cout << ret << endl;
    // }

    // cout << m.find(query_list[i]) << endl;
    // if (m.find(query_list[i]) == m.end()) {
    //   cout << "NIHIL" << endl;
    // } else {
    //   cout << m[query_list[i]] << endl;
    // }

    int ret = binarySearchForLeftRange(name_list, n, query_list[i]);
    if (name_list[ret] == query_list[i]) {
      cout << phone_list[ret] << endl;
    } else {
      cout << "NIHIL" << endl;
    }
  }

  // cout << endl;

  return 0;
}
