#include <iostream>
#include <list>
using namespace std;

list<string> insert_name_ordered(list<string> ls, string name) {
  if(ls.empty()) {
    ls.push_back(name);
  } else {
    list<string>::const_iterator iterator;
    for (iterator = ls.begin(); iterator != ls.end(); ++iterator) {
      if((*iterator).length() >= name.length()) {
          break;
      }
    }

    ls.insert(iterator, name);

    // cout << "INSERT - START" << endl;
    // list<string>::const_iterator iterator_2;
    // cout << *iterator << endl;
    // for (iterator_2 = iterator; iterator_2 != ls.end(); ++iterator_2) {
    //   // cout << *iterator_2 << endl;
    //   if((*iterator_2) >= name) {
    //       break;
    //   }
    // }
    //
    // cout << "INSERT - END" << endl;

    ls.insert(iterator_2, name);
  }

  return ls;
}

int main() {
  int n;
  cin >> n;
  string each_name;

  list<string> ls;

  for (int i=0; i<n; i++) {
    cin >> each_name;
    ls = insert_name_ordered(ls, each_name);
  }

  cout << "RESULT : " << endl;

  list<string>::const_iterator iterator;
  for (iterator = ls.begin(); iterator != ls.end(); ++iterator) {
    cout << (*iterator) << endl;
  }

  return 0;
}
