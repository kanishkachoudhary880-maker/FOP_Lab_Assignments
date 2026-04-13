#include <stdio.h>
//Without recursion 
int fact_non_recursive(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
//With recursion
int fact_recursive(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact_recursive(n - 1);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        printf("Factorial (without recursion) = %d\n", fact_non_recursive(num));
        printf("Factorial (with recursion) = %d\n", fact_recursive(num));
    }
    return 0;
}