// Find The Time 1 

#include <stdio.h>

int main() {
    float R, time;
    scanf("%f", &R);
    /* SI = P X R X T / 100
    A = S.I + P
    Return Amount  = 2P
    Therefore, 2P = S.I + P
    2P - P = P X R X T / 100
    P / P = R X T / 100
    100 = R X T
    100 / R = T */
    time = 100 / R;
    printf("%.2f", time);
    return 0;
}