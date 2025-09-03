#include <bits/stdc++.h>
using namespace std;

//Program for reversal of an array.

int main (){
    int n;
    cout << "Enter size:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:" << endl;
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Reversed array is:" << endl;
    for (int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    return 0;
}