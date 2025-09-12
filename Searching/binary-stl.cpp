#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int a;
    cout << "Eneter elemenst of array (-1 to stop):";
    while (a != -1) {               // entering elements in teh array dynamically, will stop taking elements while entered -1
        v.push_back(a);
        cin >> a;
    }
    sort(v.begin(), v.end());       //sorting the array if it is not sorted

    int s;
    cout << "Enter the element to search: " << endl;
    cin >> s;
     
    cout << endl;
    if (binary_search(v.begin(), v.end(), s)) {
        cout << "element found" << endl;
    } else {
        cout << "Element not found on vector" << endl;
    }
    return 0;
}