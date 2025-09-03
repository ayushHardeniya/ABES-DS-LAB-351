#include<bits/stdc++.h>
using namespace std;

//Program to find the missing number from the array which has the number in the range 1 to n

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n-1]; //n-1 beocz, one number is missing &  hence array has n-1 elements
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    //finding sum for total 1-n natural numbers
    int tsum=n*(n+1)/2;  //it will give total sum of natural no.
    int sum=0; 
    for(int i=0;i<n-1;i++){
        sum+=arr[i]; //it will give sum of elements present in the array
    }

    cout << "Missing number is:" << tsum-sum << endl;
    return 0;
}