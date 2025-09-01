#include <iostream>
#include <bits/stdc++.h> //after including this header file, we don't need to include any other header files, it includes all headerfiles by default
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    v.push_back(4);
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;
    v.push_back(5);
    cout << "Size of vector: " << v.size() << endl;
    cout << "Capacity of vector: " << v.capacity() << endl;

    //traversing the vector (printing value)
    for (int i=0; i<v.size(); i++){
        //cout << v[i] << " ";
        cout << v.at(i) << " "; //both are same

    }

    for(auto val:v){  //auto si used for automatic data type detection fo v vector. as int here
        cout << val << " "; //it also does the same job, as that of above loop, but it doesn't point any index, it directly access the value
    }
}