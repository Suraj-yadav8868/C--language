// WAP to print N to 1 using for loop
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    return 0;
}
