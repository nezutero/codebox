#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int max = 100;
    int min = 1;
    int guess = 0;
    int tries = 0;
    int answer = (rand() % (max - min + 1) + min);

    do {
        printf("Input some number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if (guess < answer) {
            printf("Too low\n");
        } else if (guess > answer) {
            printf("Too high\n");
        } else {
            printf("You won!\n- The number is %d\n- Guessed in %d tries\n", answer, tries);
        }
    } while (guess != answer);

    return 0;
}
