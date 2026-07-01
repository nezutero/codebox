#include <stdio.h>

int main() {
    int age;
    char name[10] = "";
    
    printf("Enter your age: ");
    scanf("%d", &age);

    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Age -> %d\nName -> %s\n", age, name);
}
