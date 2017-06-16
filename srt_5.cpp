#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <list>
using namespace std;

list<int> insert_num_ordered(list<int> ls, int num) {
  if(ls.empty()) {
    ls.push_back(num);
  } else {

    list<int>::iterator iterator_2;
    for (iterator_2 = ls.begin(); iterator_2 != ls.end(); ++iterator_2) {
      if((*iterator_2) >= num) {
          break;
      }
    }

    ls.insert(iterator_2, num);
  }

  return ls;
}

int main() {
  int n, k, x;
  list<int> ls;

  cin >> n;
  cin >> k;

  for (int i=0; i<n; i++) {
    cin >> x;
    ls = insert_num_ordered(ls, x);
  }

  list<int>::iterator iter;
  int iter_tmp = 0;
  for (iter=ls.begin(); iter!=ls.end(); iter++) {
    iter_tmp++;
    if(iter_tmp==k) {
      break;
    }
  }

  cout << (*iter) << endl;

  return 0;
}
