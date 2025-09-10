#include <bits/stdc++.h>
using namespace std;

//program to merge two sorted arrays

int main (){
    int n;
    cout<<"Enter the size of first array: ";
    cin >> n;
    int arr1[n];
    cout<<"Enter the elements of first array in sorted order: ";
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter the size of second array: ";
    cin>>m;
    int arr2[m];
    cout<<"Enter the elements of second array in sorted order: ";
    for (int i=0;i<m;i++){
        cin>>arr2[i];
    }
    int arr3[n+m];                 //merged array of size n+m
    int i=0,j=0,k=0;

    //main loop for comparing and memerging
    while(i<n && j<m){             //comparing elements of both arrays and putting the smaller one in the merged array
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }

    // copying remaining elements from the first array, if any
    while (i < n) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from the second array, if any
    while (j < m) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    for (int i=0;i<n+m;i++){      //printing the final array
        cout << arr3[i] << " ";
    }
    return 0;
}