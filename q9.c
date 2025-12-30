// WAP to calculate factorial of N using for loop
#include <stdio.h>

int main() {
    int i, n;
    long long fact = 1;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %lld", fact);
    return 0;
}
