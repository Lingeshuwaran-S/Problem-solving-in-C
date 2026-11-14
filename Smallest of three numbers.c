#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // input is read for you

    // Write your code below. Print: Smallest = <the smallest number>
    if (a < b && a < c)
        printf("Smallest = %d\n", a);
    else if (b < c)
        printf("Smallest = %d\n", b);
    else
        printf("Smallest = %d\n", c);

    return 0;
}
