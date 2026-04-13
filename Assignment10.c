#include <stdio.h>
#include <math.h>
int factorial(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int choice;
    float a, b, result;
    int n;
    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Factorial (x!)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a + b;
                printf("Result = %.2f\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a - b;
                printf("Result = %.2f\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                result = a * b;
                printf("Result = %.2f\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &a, &b);
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Error: Division by zero\n");
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%f %f", &a, &b);
                result = pow(a, b);
                printf("Result = %.2f\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%d", &n);
                if(n < 0)
                    printf("Factorial not defined for negative numbers\n");
                else
                    printf("Result = %d\n", factorial(n));
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 7);
    return 0;
}