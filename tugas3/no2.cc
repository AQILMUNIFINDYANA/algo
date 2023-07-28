#include <iostream>
#include<stdlib.h>
using namespace std;

#define SIZE 5

class CircularQueue {
private:
    int items[SIZE], front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if ((front == 0 && rear == SIZE - 1) || (rear == front - 1))
            return true;
        return false;
    }

    bool isEmpty() {
        if (front == -1)
            return true;
        return false;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue is full. Overflow condition!" << endl;
        } else {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % SIZE;
            items[rear] = element;
            cout << "Inserted " << element << " into the queue." << endl;
        }
        checkValueFrontAndRear();
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Deletion is not possible!" << endl;
        } else {
            cout << "Deleted " << items[front] << " from the queue." << endl;
            if (front == rear) {
                front = -1;
                rear = -1;
            } else {
                front = (front + 1) % SIZE;
            }
        }
        checkValueFrontAndRear();
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Elements in the queue are: ";
            int i = front;
            while (i != rear) {
                cout << items[i] << " ";
                i = (i + 1) % SIZE;
            }
            cout << items[i] << endl;
        }
        checkValueFrontAndRear();
    }
    void checkValueFrontAndRear(){
        cout << "rear : " << rear << endl;
        cout << "front : " << front << endl;
    }
};

int main() {
    CircularQueue queue;
    int value, choice;
    while (1){
        printf("\nQUEUE CIRCULAR APP");
        printf("\n*** MENU ***\n");
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value to be insert : ");
            scanf("%d", &value);
            queue.enqueue(value);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nWrong selection! try again!\n\n");
            break;
        }
    }

    return 0;
}