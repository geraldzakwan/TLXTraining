#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

list<string> insert_name_ordered(list<string> ls, string name) {
  if(ls.empty()) {
    ls.push_back(name);
  } else {
    // list<string>::iterator iterator;
    // for (iterator = ls.begin(); iterator != ls.end(); ++iterator) {
    //   if((*iterator).length() >= name.length()) {
    //       break;
    //   }
    // }
    //
    // list<string>::iterator iterator_2;
    // for (iterator_2 = iterator; iterator_2 != ls.end(); ++iterator_2) {
    //   if((*iterator_2) >= name || (*iterator_2).length() > name.length()) {
    //       break;
    //   }
    // }

    list<string>::iterator iterator_2;
    for (iterator_2 = ls.begin(); iterator_2 != ls.end(); ++iterator_2) {
      if((*iterator_2) >= name) {
          break;
      }
    }

    ls.insert(iterator_2, name);
  }

  return ls;
}

int main() {
  int n;
  cin >> n;
  string each_name;

  list<string> ls;
  int answer[n];

  for (int i=0; i<n; i++) {
    cin >> each_name;
    ls = insert_name_ordered(ls, each_name);

    list<string>::iterator iter = find(ls.begin(), ls.end(), each_name);
    answer[i] = distance(ls.begin(), iter) + 1;
  }

  for (int i=0; i<n; i++) {
    cout << answer[i] << endl;
  }

  return 0;
}
