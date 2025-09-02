#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size:" << endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }   
    cout << "Array elemets are: ";
    cout << endl;

    //traversing array (arr)
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
    
}