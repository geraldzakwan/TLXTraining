#include <iostream>
using namespace std;

int main() {
  int N;

  cin >> N;

  int arr1[N], arr2[N];

  for (int j=0; j<N; j++) {
    cin >> arr1[j];
  }

  for (int j=0; j<N; j++) {
    cin >> arr2[j];
  }

  // for (int j=0; j<N; j++) {
  //   cout << arr1[j] << " ";
  // }
  //
  // for (int j=0; j<N; j++) {
  //   cout << arr2[j] << " ";
  // }

  int N2 = 0, temp = 0, a = 0, b = 0;
  char P = 'A', Q = 'B';

  cin >> N2;

  for (int i=0; i<N2; i++) {
    cin >> P;
    cin >> a;
    a = a - 1;
    cin >> Q;
    cin >> b;
    b = b - 1;

    if(P=='A' && Q=='B') {
      temp = arr1[a];
      arr1[a] = arr2[b];
      arr2[b] = temp;
    } else if(P=='B' && Q=='A') {
      temp = arr1[b];
      arr1[b] = arr2[a];
      arr2[a] = temp;
    } else if(P=='A' && Q=='A') {
      temp = arr1[b];
      arr1[b] = arr1[a];
      arr1[a] = temp;
    } else if(P=='B' && Q=='B') {
      temp = arr2[b];
      arr2[b] = arr2[a];
      arr2[a] = temp;
    }
  }

  for (int i=0; i<N; i++) {
    if(i == N-1){
      cout << arr1[i];
    } else {
      cout << arr1[i] << " ";
    }
  }
  cout << endl;

  for (int i=0; i<N; i++) {
    if(i == N-1){
      cout << arr2[i];
    } else {
      cout << arr2[i] << " ";
    }
  }
  cout << endl;

  return 0;
}
