
#include <stdio.h>
#define MAX 5

int main()
{
    int queue[MAX] = {10, 20, 30};
    int front = 0;
    int rear = 2;
    int position, item;

    printf("Queue before update: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\nEnter position to update (1-3): ");
    scanf("%d", &position);

    if (position < 1 || position > rear - front + 1)
    {
        printf("Invalid position.\n");
    }
    else
    {
        printf("Enter new item: ");
        scanf("%d", &item);

        queue[front + position - 1] = item;

        printf("Queue after update: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }

    return 0;
}
