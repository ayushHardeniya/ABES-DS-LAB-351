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
    cout << endl;

    //another way of traversing the vector

    for(auto val:v){  //auto si used for automatic data type detection fo v vector. as int here
        cout << val << " "; //it also does the same job, as that of above loop, but it doesn't point any index, it directly access the value
    }

    //getting first and last element of vector
    cout << "Front Value:" << v.front() << endl; //gives first element
    cout << "Back Value:" << v.back() << endl; //gives last element

    // inserting an element in between the vector
    v.insert (v.begin()+3,340); //inserts 340 at index 3, v.begin() gives starting address of vector (index 3 & position 4)
    cout << "After inserting 340 at index 3: " << endl;
    for(auto val:v){
        cout << val << " ";
    }

    cout << endl;
    cout << endl;
    
    //inserting multiple lements in between the vector at different frequency

    v.insert(v.begin()+2,3,200); //inserts 200 three times from index 2 () 
    cout << "After inserting 200 three times from index 2: " << endl;
    for (auto val:v){
        cout << val << " ";
    }

    cout << endl;

    //erasing the first element of vector
    v.erase(v.begin()); //erases first element
    cout << endl;
    cout << "After erasing first element: " << endl;
    for (auto val:v){
        cout << val << " ";
    }

    //need to erase first 2/3 elements
    v.erase(v.begin(),v.begin()+3); //erases first 3 elements Syntax- erase(starting address, ending address+1) (+1 becoz ending address is not included)
    cout << endl;
    cout << "After erasing first 3 elements: " << endl;
    for (auto val:v){
        cout << val << " ";
    }  

    cout << endl;

    //initialising a vector with some values
    vector <int> vec={10,20,30};
    for (auto val:vec){
        cout << val << " ";
    }

    cout << endl;

    //initialising a vector of size n with all values as x

    vector<int> vec2(5,100); //initialising a vector of size 5 with all values as 100
    for (auto val:vec2){
        cout << val << " ";
    }
}