#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);  // input is read for you

    // Write your code below
    printf("Factors of %d: ", n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
