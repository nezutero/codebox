#include <stdio.h>

int main () {
    int array[] = {3, 4, 5, 6, 44, 22};
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    return 0;
}
