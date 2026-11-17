#include <stdio.h>

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);  // input is read for you

    // Write your code below
    for (int i = 1; i <= n; i += 2) {
        sum = sum + i;
    }

    printf("Sum of odd numbers = %d", sum);

    return 0;
}
