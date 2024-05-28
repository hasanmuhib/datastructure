#include <stdio.h>
#define size 5

int queue[size], front = -1, rear = -1;

void enqueue();
void dequeue();
void display();
int isempty();
int isfull();
void peek();

int main() {
    int choice;
    while (1) {
        printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Peek\n");
        printf("5.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                peek();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}

void enqueue() {
    if (isfull()) {
        return;
    }
    int value;
    printf("Enter the value to be added: ");
    scanf("%d", &value);
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d added to queue!\n", value);
}

void dequeue() {
    if (isempty()) {
        return;
    }
    printf("%d removed from queue.\n", queue[front]);
    front++;
    if (front > rear) {
        front = rear = -1; // Reset the queue when all elements are dequeued
    }
}

void display() {
    if (isempty()) {
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int isempty() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return 1;
    }
    return 0;
}

int isfull() {
    if (rear == size - 1) {
        printf("Queue is full!\n");
        return 1;
    }
    return 0;
}

void peek() {
    if (isempty()) {
        return;
    }
    printf("The front value is %d\n", queue[front]);
}