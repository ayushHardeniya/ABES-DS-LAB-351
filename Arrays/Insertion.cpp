#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    cout << "Given array is: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //inserting more elements
    int n=5, pos, val;
    cout << "Enetr position: ";
    cin >> pos;
    cout << "Enter value: ";
    cin >> val;

    //to shift extra elemets, we need to first shift the existing element into right to create the space
    for (int i=0; i<n; i++){
        if (i==pos){
            for (int j=n; j>i; j--){  // loope is running from end to beg. (n -> i) 
                arr[j]=arr[j-1];      //shifting elements to one right position
            }
            arr[i]=val;               // inserting the value at desired position
            break;     
        }
    }
    n++; //increasing size of array after insertion
    cout << "Array after insertion is:" << endl;
    for (int i=0; i<n; i++){   //using i<n becoz the size of array has been already increaed by 1...
        cout << arr[i] << " ";
    }
return 0;
}