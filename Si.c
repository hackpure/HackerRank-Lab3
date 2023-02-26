// Simple Interest 6

#include <stdio.h>

int main() {
    int P, R, T;
    scanf("%d", &P);
    scanf("%d", &R);
    scanf("%d", &T);
    printf("%d", (P * R * T / 100) + P );
    return 0;
}