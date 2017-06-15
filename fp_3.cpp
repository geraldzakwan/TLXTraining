/*http://zishere.blogspot.jp/2014/02/faktorisasi-prima.html*/

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

    if (counter_2==0) {

    } else if (counter_2==1) {
      cout << "2";
    } else {
      cout << "2^" << counter_2;
    }

    int counter_other = 0;
    int pernah_ada = 0;
    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    int first_one = 0;
    for (int i = 3; i <= sqrt(n); i = i+2) {
        counter_other = 0;
        // While i divides n, print i and divide n
        while (n%i == 0) {
            counter_other++;
            n = n/i;
        }

        if (counter_other!=0) {
          if(first_one==0) {
            if(counter_2!=0) {
              cout << " x ";
            }
          } else {
            cout << " x ";
          }

          if (counter_other==1) {
            cout << i;
          } else {
            cout << i << "^" << counter_other;
          }
          first_one++;
          pernah_ada++;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2) {
        // cout << "masuk sini gan" << endl;
        // if(counter_other == 0) {
        //     cout << n << endl;
        // } else {
        //     cout << " x " << n << endl;
        // }
        if(pernah_ada > 0 || counter_2 > 0) {
            cout << " x " << n << endl;
        } else {
            cout << n << endl;
        }
    } else {
        cout << endl;
    }
}

/* Driver program to test above function */
int main() {
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}
