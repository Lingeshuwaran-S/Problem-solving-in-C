#include <stdio.h>

int main(void) {
    int n, count = 0;
    scanf("%d", &n);  // input is read for you

    // Write your code below
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    printf("Number of factors = %d", count);

    return 0;
}
