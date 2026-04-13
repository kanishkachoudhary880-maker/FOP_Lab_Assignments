#include <stdio.h>
#include <math.h>
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}
int primeFactorial(int n) {
    int digit, prod = 1, found = 0;
    while(n > 0) {
        digit = n % 10;
        if(isPrime(digit)) {
            prod *= digit;
            found = 1;
        }
        n /= 10;
    }
    if(found)
        return prod;
    else
        return 0;
}
int main() {
    int choice, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    do {
        printf("1. Square Root\n");
        printf("2. Square\n");
        printf("3. Cube\n");
        printf("4. Check Prime\n");
        printf("5. Factorial\n");
        printf("6. Prime Factorial (product of prime digits)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                if(num >= 0)
                    printf("Square Root = %.2f\n", sqrt(num));
                else
                    printf("Invalid (negative number)\n");
                break;
            case 2:
                printf("Square = %d\n", num * num);
                break;
            case 3:
                printf("Cube = %d\n", num * num * num);
                break;
            case 4:
                if(isPrime(num))
                    printf("Number is Prime\n");
                else
                    printf("Number is NOT Prime\n");
                break;
            case 5:
                if(num >= 0)
                    printf("Factorial = %d\n", factorial(num));
                else
                    printf("Invalid for negative number\n");
                break;
            case 6:
                printf("Prime Factorial = %d\n", primeFactorial(num));
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 7);
    return 0;
}