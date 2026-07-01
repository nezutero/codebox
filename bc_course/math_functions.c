#include <stdio.h>
#include <math.h>

int main() {
    float x = 16.43;

    // x = sqrt(x);
    // x = pow(x, 4);
    // x = ceil(x); -> round up
    // x = abs(x); -> distance from 0
    // x = log(x);
    x = round(x);

    printf("%f", x);

    return 0;
}
