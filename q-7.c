//WAP to find leap years from 2000 to 3000 using for loop
#include <stdio.h>

int main() {
    int year;

    for(year = 2000; year <= 3000; year++) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d ", year);
        }
    }
    return 0;
}
