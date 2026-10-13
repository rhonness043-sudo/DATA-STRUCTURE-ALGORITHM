
#include <stdio.h>
#define MAX 5

int main()
{
    int queue[MAX] = {10, 20, 30};
    int front = 0;
    int rear = 2;
    int item;

    printf("Queue before insertion: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\nEnter item to insert: ");
    scanf("%d", &item);

    if (rear == MAX - 1)
    {
        printf("Queue is full. Cannot insert.\n");
    }
    else
    {
        rear++;
        queue[rear] = item;

        printf("Queue after insertion: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
