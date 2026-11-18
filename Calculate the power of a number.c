#include <stdio.h>

int main(void) {
    int base, exp;
    long long result = 1;
    scanf("%d %d", &base, &exp);  // input is read for you

    // Write your code below
    for (int i = 1; i <= exp; i++) {
        result = result * base;
    }

    printf("%d^%d = %lld", base, exp, result);

    return 0;
}
