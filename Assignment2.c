#include <stdio.h>
int main() 
{
    int choice;
    float a, b, result;
    do {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }
        switch(choice) {
            case 1:
                result = a + b;
                printf("Result = %.2f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Result = %.2f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Result = %.2f\n", result);
                break;
            case 4:
                if (b != 0) {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                } else {
                    printf("Error: Division by zero not allowed\n");
                }
                break;
            case 5:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);
    return 0;
}