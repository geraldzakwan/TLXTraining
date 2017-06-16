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
  int n;
  cin >> n;
  int each_num;

  list<int> ls;

  for (int i=0; i<n; i++) {
    cin >> each_num;
    ls = insert_num_ordered(ls, each_num);
  }

  float ret = 0.0;

  // if(n%2==1) {
  //   list<int>::iterator iter = ls.begin();
  //   for (int i=0; i<n/2; i++) {
  //     iter++;
  //   }
  //   ret = (*iter);
  //   printf("%.1f\n", ret);
  // } else {
  //   list<int>::iterator iter = ls.begin();
  //   for (int i=0; i<=n/2; i++) {
  //     if(i==((n/2)-1) || i==(n/2)) {
  //         ret += (*iter);
  //     }
  //     iter++;
  //   }
  //   ret = ret/2;
  //   printf("%.1f\n", ret);
  // }

  cout << ls[2] << endl;

  return 0;
}
