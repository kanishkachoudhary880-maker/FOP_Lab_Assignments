#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100], temp[100];
    int choice, i, len;
    printf("Enter first string: ");
    scanf("%s", str1);
    do {
        printf("1. Length of string\n");
        printf("2. Reverse string\n");
        printf("3. Compare two strings\n");
        printf("4. Check Palindrome\n");
        printf("5. Check Substring\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                len = strlen(str1);
                printf("Length = %d\n", len);
                break;
            case 2:
                strcpy(temp, str1);
                strrev(temp);   // may not work in all compilers
                printf("Reversed string = %s\n", temp);
                break;
            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are NOT equal\n");
                break;
            case 4:
                strcpy(temp, str1);
                strrev(temp);
                if(strcmp(str1, temp) == 0)
                    printf("Palindrome string\n");
                else
                    printf("Not a palindrome\n");
                break;
            case 5:
                printf("Enter substring: ");
                scanf("%s", str2);
                if(strstr(str1, str2) != NULL)
                    printf("Substring found\n");
                else
                    printf("Substring NOT found\n");
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 6);
    return 0;
}