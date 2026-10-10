//One Dimensional Array Insert & Display 

#include <stdio.h>

int main() {
    int i;

    int score[] = {2, 4, 6, 8, 12};

        int n = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < 5; i++) {
        printf("[%d]", score[i]);
    }

    printf("\n");

    // Start from the last element and move it right
    for (i = 4; i >= 4; i--) {
        score[i + 1] = score[i];
    }

    // i is now 3, so move to the insertion position
    i++;

    score[i] = 10;

    for (i = 0; i < 6; i++) {
        printf("[%d]", score[i]);
    }

    printf("\n");

    return 0;
}
