//One Dimensional Array Search & Display 


#include <stdio.h>

int main() {
    int i;
    int number;
    int found = 0;

    int score[] = {2, 4, 6, 8, 12};

    int n = sizeof(score) / sizeof(score[0]);


    for (i = 0; i < n; i++) {
        printf("[%d]", score[i]);
    }

    printf("\n");

    printf("Enter the number to search: ");
    scanf("%d", &number);

    // Search for the number
    for (i = 0; i < n; i++) {
        if (score[i] == number) {
            found = 1;
            break;
        }
    }

    // Display the result
    if (found) {
        printf("Number %d found at position %d.\n", number, i);
    } else {
        printf("Number %d not found.\n", number);
    }

    return 0;
}
