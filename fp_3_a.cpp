// Program to print all prime factors
# include <iostream>
# include <cmath>
using namespace std;

// A function to print all prime factors of a given number n
void primeFactors(int n) {
  if (n==1) {
    cout << "1" << endl;
    return;
  }

  // Print the number of 2s that divide n
  int counter_2 = 0;
  while (n%2 == 0) {
      // cout << "2 ";
      counter_2++;
      n = n/2;
  }

  if (counter_2==1) {
    cout << "2";
  } else if (counter_2 != 0) {
    cout << "2^" << counter_2;
  }

  

}

/* Driver program to test above function */
int main() {
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}
