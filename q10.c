//WAP to print multiplication table of N using for loop

#include <stdio.h>

int main() {
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
