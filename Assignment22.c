#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100], temp[100];
    int choice;
    printf("Enter first string: ");
    scanf("%s", str1);
    do {
        printf("1. Length of string\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare strings\n");
        printf("5. Reverse string\n");
        printf("6. Find substring\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(temp, str1);
                printf("Copied string = %s\n", temp);
                break;
            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string = %s\n", str1);
                break;
            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);
                if(strcmp(str1, str2) == 0)
                    printf("Strings are equal\n");
                else
                    printf("Strings are NOT equal\n");
                break;
            case 5:
                strcpy(temp, str1);
                strrev(temp);   // may not work in all compilers
                printf("Reversed string = %s\n", temp);
                break;
            case 6:
                printf("Enter substring: ");
                scanf("%s", str2);
                if(strstr(str1, str2) != NULL)
                    printf("Substring found\n");
                else
                    printf("Substring NOT found\n");
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