#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, curr;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> curr;
    if(curr==1) {
      cout << "YA" << endl;
    } else if (curr==2) {
      cout << "YA" << endl;
    } else {
      int count = 0;
      for (int j=2; j<=ceil(sqrt(curr)); j++) {
        if(curr%j==0){
          if(curr/j>j) {
            count += 2;
          } else {
            count++;
          }
        }
      }
      if(count<=2) {
        cout << "YA" << endl;
      } else {
        cout << "BUKAN" << endl;
      }
    }
  }
  return 0;
}
