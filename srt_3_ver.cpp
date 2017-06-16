// C/C++ program to solve fractional Knapsack Problem
#include <bits/stdc++.h>
using namespace std;

// Comparison function to sort Item according to val/weight ratio
bool cmp(int a, int b)
{
    return a < b;
}

// driver program to test above function
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i=0; i<n; i++) {
      cin >> arr[i];
    }

    sort(arr, arr + n, cmp);

    if (n%2 == 1) {
      float ret = (float) arr[n/2];
      printf("%.1f\n", ret);
    } else {
      float ret = (float) arr[n/2] + (float) arr[(n/2) - 1];
      ret = ret / 2;
      printf("%.1f\n", ret);
    }

    return 0;
}
