#include <stdio.h>

int main(void) {
    int n;
    long long fact = 1;
    scanf("%d", &n);  // input is read for you

    // Write your code below
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("%d! = %lld", n, fact);

    return 0;
}
