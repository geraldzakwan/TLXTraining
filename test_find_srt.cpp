// C++ STL algorithm, find()

#include <list>

#include <algorithm>

#include <iostream>

using namespace std;



int main(void)

{

// list container

list <int> lst;

// list iterators

list <int>::iterator Iter;

list <int>::iterator result;



// pushing data, constructing lst list

lst.push_back(9);

lst.push_back(21);

lst.push_back(14);

lst.push_back(10);

lst.push_back(16);

lst.push_back(31);



// print the data

cout<<"List lst data: ";

for(Iter = lst.begin(); Iter != lst.end(); Iter++)

cout<<*Iter<<" ";

cout<<endl;



// do the find() operation

cout<<"\nOperation: find(lst.begin(), lst.end(), 14)"<<endl;

result = find(lst.begin(), lst.end(), 14);



// print the result

if(result == lst.end())

cout<<"There is no 14 in list lst."<<endl;

else

result++;

cout<<"There is a 14 in list lst and it is"<<" followed by a "<<*(result)<<endl;

return 0;

}
