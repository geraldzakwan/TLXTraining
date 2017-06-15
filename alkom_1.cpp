#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n, curr;
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> curr;
    if(curr==1) {
      cout << "BUKAN" << endl;
    } else if (curr==2) {
      cout << "YA" << endl;
    } else {
      bool isPrima = true;
      for (int j=2; j<=ceil(sqrt(curr)); j++) {
        if(curr%j==0){
          isPrima = false;
        }
      }
      if(isPrima) {
        cout << "YA" << endl;
      } else {
        cout << "BUKAN" << endl;
      }
    }
  }
  return 0;
}
