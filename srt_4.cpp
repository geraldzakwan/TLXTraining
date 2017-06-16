#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <list>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n;
  cin >> x;

  int weight_list[n];
  int price_list[n];
  float pro_list[n];

  for (int i=0; i<n; i++) {
    cin >> weight_list[i];
  }

  for (int i=0; i<n; i++) {
    cin >> price_list[i];
    pro_list[i] = (float) price_list[i] / (float) weight_list[i];
  }

  list<float> ls;
  list<int> wl;
  list<int> pl;
  for (int i=0; i<n; i++) {
    if(ls.empty()) {
      ls.push_back(pro_list[i]);
      wl.push_back(weight_list[i]);
      pl.push_back(price_list[i]);
    } else {
      list<float>::iterator iterator_2;
      list<int>::iterator iterator_w = wl.begin();
      list<int>::iterator iterator_p = pl.begin();
      for (iterator_2 = ls.begin(); iterator_2 != ls.end(); ++iterator_2) {
        if((*iterator_2) <= pro_list[i]) {
            break;
        }
        iterator_w++;
        iterator_p++;
      }

      ls.insert(iterator_2, pro_list[i]);
      wl.insert(iterator_w, weight_list[i]);
      pl.insert(iterator_p, price_list[i]);
    }
  }

  // vector

  int total_berat = 0;
  float total_duit = 0;
  list<float>::iterator iterator_2 = ls.begin();
  list<int>::iterator iterator_w = wl.begin();
  list<int>::iterator iterator_p = pl.begin();
  while(total_berat < x) {
    if((*iterator_w) <= (x-total_berat)) {
      total_duit += (*iterator_2) * (float) (*iterator_w);
    }
    iterator_2++;
    iterator_w++;
    iterator_p++;
  }

  printf("%.5f\n", total_duit);

  // list<float>::iterator iterator_2;
  // list<int>::iterator iterator_w = wl.begin();
  // list<int>::iterator iterator_p = pl.begin();
  // for (iterator_2 = ls.begin(); iterator_2 != ls.end(); ++iterator_2) {
  //   cout << (*iterator_2) << endl;
  //   cout << (*iterator_w) << endl;
  //   cout << (*iterator_p) << endl;
  //   cout << endl;
  //   iterator_w++;
  //   iterator_p++;
  // }

  return 0;
}
