#include <stdio.h>
#include <math.h>
int factorial(int n) 
{
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int n, i;
    float x, sum = 0;
    printf("Enter value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            sum += pow(x, 2*i + 1) / factorial(2*i + 1);
        else
            sum -= pow(x, 2*i + 1) / factorial(2*i + 1);
    }
    printf("Sum of sine series = %.4f\n", sum);
    return 0;
}