#include <bits/stdc++.h>
using namespace std;

///program to demonstrate basic stack operations

int top=-1;  // declaring top as globally, as it is supposed to be checked as the condition during the whole program
int ele;
void push(int stack[], int n, int ele){
    if (top == n-1){
        cout << "Overflow" << endl;  // stack is full
    }
    else{
        top +=1;                //top ko aage khiska diya, as it was poiniting to -1 earlier now updated to 0, i.e the 0th index of stack 
        stack[top] = ele;       // now storing the element in the stack 
    }
}

void pop(int stack[], int n){
    if(top==-1){
        cout << "Underflow" << endl;
    }
    else {
        ele = stack[top];
        top--;
        cout << "Popped element is: " << ele << endl;
    }
}
void display(int stack[], int n){
    for (int i = top; i>=0; i--){
        cout << stack[i] << " ";
       
    }
}

//now main function
int main(){
    int choice,n,ele;
    cout << "Enter size for stack: "<< endl;
    cin >> n;
    int stack[n];
    do{
        cout << "Enter the choice(1-3):\n 1: Push,\n 2: Pop,\n 3: Display \n 4: Exit" << endl;
        cout << "--------------------------------" << endl;
        cin >> choice;
        switch (choice){
            case 1:{
                cout << "Enter elemnt to be inserted:" << endl;
                cin >> ele;
                push(stack,n,ele);
                break;
            }
            case 2:{
                cout << "Element is popped." << endl;
                pop(stack,n);
                break;
            }
            case 3:{
                display(stack,n);
                break;
            }
            case 4:{
                cout << "Exiting the program." << endl;
                break;
            }
            default:{
                cout << "Invalid choice." << endl;
                break;
            }
        }
    } while(choice!=4);
    return 0;
}