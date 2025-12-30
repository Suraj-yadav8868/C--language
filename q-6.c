//WAP to print even numbers from N to 1 using for loop
#include <stdio.h>

int main() {
    int i, n;
    printf("Enter N: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
