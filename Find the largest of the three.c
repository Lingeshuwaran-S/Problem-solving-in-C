#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // input is read for you

    // Write your code below. Print: Largest = <the biggest number>
    if (a >= b && a >= c) {
        printf("Largest = %d", a);
    } 
    else if (b >= a && b >= c) {
        printf("Largest = %d", b);
    } 
    else {
        printf("Largest = %d", c);
    }

    return 0;
}
