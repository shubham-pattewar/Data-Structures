#include <iostream>

using namespace std;

int top = -1;

void push(int value, int size, int arr[]) {
    if (top == size - 1) {
        cout << "Sorry!! Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = value;
        cout << "Successfully Pushed: " << value << endl;
    }
}

int pop(int size, int arr[]) {
    if (top == -1) {
        cout << "Sorry!! Stack Underflow" << endl;
        return -1;
    } else {
        int item = arr[top];
        top--;
        cout << "Successfully Popped out: " << item << endl;
        return item;
    }
}

void display(int arr[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int Top(int arr[]) {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return -1; 
    }
    return arr[top];
}

bool isEmpty() {
    return top == -1;
}

bool isFull(int size) {
    return top == size - 1;
}

int main() {
    int size, choice, value;
    cout << "Enter the size of Stack: ";
    cin >> size;
    int arr[size]; 

    cout << "What would you like to perform: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Top" << endl;
        cout << "5. isEmpty" << endl;
        cout << "6. isFull" << endl;
        cout << "7. Exit" << endl;

    do {
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Value to Push: ";
                cin >> value;
                push(value, size, arr);
                break;
            case 2:
                pop(size, arr);
                break;
            case 3:
                display(arr);
                break;
            case 4:
                cout << "Top element: " << Top(arr) << endl;
                break;
            case 5:
                if (isEmpty()){
                    cout<< "Stack is Empty" << endl;
                }else{
                    cout<< "Stack is not Empty"<< endl;
                }
                break;
            case 6:
                if (isFull(size)){
                    cout<< "Stack is Full"<< endl;
                }else{
                    cout<< "Stack is not Full"<< endl;
                }
                break;
            case 7:
                cout<< "Exiting..."<< endl;
    
            default:
                cout << "Invalid choice" << endl;
        }
    } while(choice!=7); 

    return 0;
}