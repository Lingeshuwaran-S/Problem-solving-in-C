#include <stdio.h>

int main(void) {
    int start, end, a = 0;
    scanf("%d %d", &start, &end);  // input is read for you

    // Write your code below. Print: every prime from start to end, each followed by a space
    for (int n = start; n <= end; n++) {
        a = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                a++;
            }
        }
        if (a == 2) {
            printf("%d ", n);
        }
    }
    return 0;
}
