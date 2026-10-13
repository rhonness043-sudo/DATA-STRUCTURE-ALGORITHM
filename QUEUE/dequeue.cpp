
#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to delete an element
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty. Nothing to delete.\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// Function to display the queue
void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function
int main()
{
    // Adding elements to the queue
    queue[++rear] = 10;
    front = 0;
    queue[++rear] = 20;
    queue[++rear] = 30;

    printf("Before deletion:\n");
    display();

    delete();

    printf("After deletion:\n");
    display();

    return 0;
}
