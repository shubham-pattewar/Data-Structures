#include <iostream>

using namespace std;

int front = -1;
int rear = -1;

void enqueue(int value, int size, int arr[]) {
    if (rear == size - 1) {
        cout << "Sorry!! Queue Overflow" << endl;
    } else {
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << "Successfully Enqueued: " << value << endl;
    }
}

int dequeue(int size, int arr[]) {
    if (front == -1 ) {
        cout << "Sorry!! Queue Underflow" << endl;
        return -1;
    } else {
        int item = arr[front];
        front++;
        cout << "Successfully  Dequeued: " << item << endl;
        return item;
    }
}

void display(int arr[]) {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int peek(int arr[]) {
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return -1;
    }
    return arr[front];
}

bool isEmpty() {
    return front == -1;
}

bool isFull(int size) {
    return rear == size - 1;
}

int main() {
    int size, choice, value;
    cout << "Enter the size of Queue: ";
    cin >> size;
    int arr[size];

    cout << "What would you like to perform: " << endl;
    cout << "1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display" << endl;
    cout << "4. Peek" << endl;
    cout << "5. isEmpty" << endl;
    cout << "6. isFull" << endl;
    cout << "7. Exit" << endl;

    do {
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Value to Enqueue: ";
                cin >> value;
                enqueue(value, size, arr);
                break;
            case 2:
                dequeue(size, arr);
                break;
            case 3:
                display(arr);
                break;
            case 4:
                cout << "Front element: " << peek(arr) << endl;
                break;
            case 5:
                if (isEmpty()) {
                    cout << "Queue is Empty" << endl;
                } else {
                    cout << "Queue is not Empty" << endl;
                }
                break;
            case 6:
                if (isFull(size)) {
                    cout << "Queue is Full" << endl;
                } else {
                    cout << "Queue is not Full" << endl;
                }
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 7);

    return 0;
}