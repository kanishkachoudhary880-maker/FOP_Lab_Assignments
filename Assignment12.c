#include <stdio.h>
int main() {
    int a, b, i, gcd, scd = -1;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(i = 2; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            scd = i;
            break;
        }
    }
    if(scd != -1)
        printf("Smallest Common Divisor (other than 1) = %d\n", scd);
    else
        printf("No common divisor other than 1\n");
    for(i = 1; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    printf("Greatest Common Divisor (GCD) = %d\n", gcd);
    return 0;
}