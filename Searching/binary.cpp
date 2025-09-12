// Program to find an element in a sorted array using binary search

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array in sorted order:" << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    int low,high,mid;
    low = 0;       //allocating the value of index to low and high while seearching
    high = n-1;
    cout << "Enter element to be searched:" << endl;
    cin >> target;
    int found = 0;
    while (low<=high){
        mid = low + (high - low)/2; //to avoid overflow
        if (arr[mid] == target){
            cout << mid;
            cout << "True" << endl;
            found = 1;      //flag for element found
            break;
        }
        else if (arr[mid] > target){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (found == 0){
        cout << "False" << endl;
    }


}