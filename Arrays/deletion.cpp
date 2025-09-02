#include <iostream>
using namespace std;

int main() {
    // program to delete elements from an array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Given array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    
    int n = 5; // initial size of array
    int pos;  // position to delete
    
    cout << endl;

    //deleting elements
    cout << "Enter position to delete:";
    cin >> pos;

    //shifting elements to left from the position
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; //overwriting the element at pos with the next element
    }
    n--; //decreasing size of array after deletion

    cout << "Array after deletion is:" << endl;
    for (int i = 0; i < n; i++) { //using i<n because the size of array has been already decreased by 1...
        cout << arr[i] << " ";
    }       
    cout << endl;


    return 0;
}