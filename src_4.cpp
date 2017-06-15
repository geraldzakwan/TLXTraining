#include <iostream>
using namespace std;

int binarySearchForLeftRange(int a[], int length, int left_range) {
    if (a[length-1] <= left_range)
        return -1;

    int low = 0;
    int high = length-1;

    while (low<=high)
    {
        int mid = low+((high-low)/2);

        if(a[mid] > left_range)
            high = mid-1;
        else //if(a[mid]<i)
            low = mid+1;
    }

    return high+1;
}

int binarySearchForRightRange(int a[], int length, int right_range) {
    if (a[0] > right_range)
        return -1;

    int low = 0;
    int high = length-1;

    while (low<=high)
    {
        int mid = low+((high-low)/2);

        if(a[mid] > right_range)
            high = mid-1;
        else //if(a[mid]<i)
            low = mid+1;
    }

    return low-1;
}

int count_between(int min, int max, int arr[], int n) {
  int count = 0, i = 0;
  bool stop = false;

  // while (i<n && !stop) {
  //   if (arr[i]>min && arr[i] <= max) {
  //     count++;
  //   } else if (arr[i] > max) {
  //     stop = true;
  //   }
  //   i++;
  // }

  int first = -1, last = -1;
  while (i<n && arr[i]<min) {
    i++;
  }

  if (i==n) {
    return 0;
  }

  first = i;

  i = n;
  while (i>-1 && arr[i]>=max) {
    i--;
  }

  if(i==-1) {
    last = n-1;
  } else {
    last = i;
  }

  count = last - first + 1;
  return count;
}

int main() {
  int n, q;

  cin >> n;

  int weight_list[n];

  for (int i=0; i<n; i++) {
    cin >> weight_list[i];
  }

  cin >> q;

  int query_min_list[q];
  int query_max_list[q];

  for (int i=0; i<q; i++) {
    cin >> query_min_list[i];
    cin >> query_max_list[i];
  }

  // for (int i=0; i<q; i++) {
  //   cout << count_between(query_min_list[i], query_max_list[i], weight_list, n) << endl;
  // }

  for (int i=0; i<q; i++) {
    int left_index = binarySearchForLeftRange(weight_list, n, query_min_list[i]);
    int right_index = binarySearchForRightRange(weight_list, n, query_max_list[i]);

    if(left_index == -1 || right_index == -1) {
      cout << "0" << endl;
    } else {
      cout << right_index - left_index + 1 << endl;
    }
  }

  return 0;
}
