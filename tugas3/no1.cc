#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#define SIZE 10

void enQueue(int);
void deQueue();
void display();
int queue[SIZE], head = -1, tail = -1;

void enQueue(int value){
    if (tail == SIZE-1)
        printf("\nQueue is Full!!! Insertion is not possible!!!");
    else{
        if(head == -1)
        head = 0;
        tail++;
        queue[tail] = value;
        printf("\nInsertion success!!!");
        printf("\ntail : %d",tail);
        printf("\nhead : %d",head);
    }
    display ();
}

void deQueue (){
    if(head == tail && head<0)
        printf("\nQueueu is Empty!!! Deletion is not possible!!!");
    else{
        printf("\nDeleted : %d", queue[head]);

        for (int i=0;i<tail+1;i++)
            queue[i]=queue[i+1];
        tail--;

        if(tail<0){
            tail = -1;
            head = -1;
        }
    }
    display();
}

void display(){
    if(tail == -1 && head == -1)
        printf("\nQueue is Empty!!!");
    else if(tail == -1 && head == 0){
        printf("\nQueue is Empty");
    }
    else{
        int i;
        printf("\nQueue elements are :\n");
        for (i = head; i <= tail; i++)
            printf("%d\t", queue[i]);
    }
}

int main () {
    int value, choice;
    while(1){
        printf("\n\n***** MENU *****\n");
        printf("1. Insertion\n2. Deletion\n3. Display\n4. Exit");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice){
    case 1: printf("Enter the value to be insert : ");
    scanf("%d",&value);
    enQueue(value);
    break;
    case 2: deQueue();
    break;
    case 3: display ();
    break;
    case 4: exit(0);
    default: printf("\nWrong selection!!! Try again!!!");
        }
    }
}