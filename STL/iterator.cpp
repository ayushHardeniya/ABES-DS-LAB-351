#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8};
    cout << "Original Vector: " << endl;
    for (auto val:v){
        cout << val << " ";
    }
    cout << endl;

    //iterators
    vector<int>::iterator itr=v.begin(); //iterator pointing to first element of vector
    cout << "Vaule at itr (v.begin()): " << *itr << endl; //dereferencing the iterator to get the value , using * as that of pointer in C
    
    cout << endl;

    //using iterator to traverse a vector
    cout << "Traversing the vector using iterator: " << endl;
    for (itr=v.begin(); itr!=v.end(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;
}