// Leap Years 2

#include <stdio.h>

int main() {
    int year, i;
    scanf("%d", &year);
    for (i = 1; i <= year; i++){
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
            printf("%d ", i);
        }
    }
    return 0;
}