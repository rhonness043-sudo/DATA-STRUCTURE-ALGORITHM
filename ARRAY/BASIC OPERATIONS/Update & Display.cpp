//One Dimensional Array Update & Display 

#include <stdio.h>

int main() {
    int i;
    int number;
    int newValue;
    int found = 0;

    int score[] = {2, 4, 6, 8, 12};

    int n = sizeof(score) / sizeof(score[0]);


    for (i = 0; i < n; i++) {
        printf("[%d]", score[i]);
    }

    printf("\n");

    printf("Enter the number to update: ");
    scanf("%d", &number);

    printf("Enter the new value: ");
    scanf("%d", &newValue);

    // Search for the number
    for (i = 0; i < n; i++) {
        if (score[i] == number) {
            score[i] = newValue;
            found = 1;
            break;
        }
    }

    // Display the updated array
    if (found) {
        for (i = 0; i < n; i++) {
            printf("[%d]", score[i]);
        }

        printf("\n");
    } else {
        printf("Number not found.\n");
    }

    return 0;
}
