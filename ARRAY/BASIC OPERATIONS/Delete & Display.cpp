//One Dimensional Array Delete & Display 

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

    // Ask the user which number to delete
    printf("Enter the number to delete: ");
    scanf("%d", &number);

    // Find the number
    for (i = 0; i < n; i++) {
        if (score[i] == number) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (; i < n - 1; i++) {
            score[i] = score[i + 1];
        }

        n--;


        for (i = 0; i < n; i++) {
            printf("[%d]", score[i]);
        }

        printf("\n");
    } else {
        printf("Number not found.\n");
    }

    return 0;
}
