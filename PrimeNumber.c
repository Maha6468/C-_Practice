#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a random number: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("%d is Not a Prime Number.\n", num);
        return 0;
    }
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is Not a Prime Number.\n", num);
            return 0;
        }
    }
    printf("%d is a Prime Number.\n", num);

    return 0;
}
