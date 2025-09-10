#include<bits/stdc++.h>
using namespace std;

// Program to find which element is repeated in the array and which is not

int main (){
    int n,count=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){  //second loop for comparing the repetitive elements by holding at one which is stick with i
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout<<arr[i]<<" is repeated "<<count<<" times"<<endl;
        }
        else{
            cout<<arr[i]<<" is not repeated"<<endl;
        }
    }
}