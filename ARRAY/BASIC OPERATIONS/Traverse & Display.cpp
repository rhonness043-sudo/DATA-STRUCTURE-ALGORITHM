//One Dimensional Array Traverse & Display


#include <stdio.h>

int main() {
    int i;

    int score[] = {2, 4, 6, 8, 12};

    for(i = 0; i < 5; i++) {
        printf("[%d]", score[i]);
    }

    printf("\n");

    return 0;
}
