#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("Largest = %d\n", a);
    else
        printf("Largest = %d\n", b);
    return 0;
}
