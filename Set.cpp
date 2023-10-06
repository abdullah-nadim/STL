#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> mySet = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

    // Iterating using iterators
    set<int>:: iterator it;


    for (it = mySet.begin(); it != mySet.end(); ++it) {
       cout << *it << " ";
    }

    cout << endl;
     // Iterating using Auto
    for(auto i : mySet)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}
