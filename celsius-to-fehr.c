#include <stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    celsius = lower;
    // celsius = (5.0/9.0) * (fahr-32.0);
    printf("TEMPERATURE CONVERTER\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32;
        printf("%6.f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}
