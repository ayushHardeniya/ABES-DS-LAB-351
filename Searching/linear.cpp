#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements in array:" << endl;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cout << "Enter element " << i+1 << endl;
        cin >> arr[i];
    }
    int ele;
    cout << "Eneter element to be searched:" << endl;
    cin >> ele; 
    int found=0;
    //Linear search of ele
    for (int i=0;i<n;i++){
        if (ele==arr[i]){
            found=1;
            break;
        }
    }
    if (found==1){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

}