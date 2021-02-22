#include <stdio.h>

int main() {
    int integer1, integer2, sum;
    printf("Please enter the first integer number: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer number: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d.\n", sum);
    system("pause");
    return 0;
}