#include <stdio.h>
#include <stdlib.h>
struct student {
    int roll;
    char name[50];
    float marks;
}
int main() {
    FILE *fp1, *fp2;
    struct student s;
    fp1 = fopen("student1.txt", "r");
    if(fp1 == NULL) {
        printf("Error opening source file\n");
        exit(1);
    }
    fp2 = fopen("student2.txt", "w");
    if(fp2 == NULL) {
        printf("Error opening destination file\n");
        exit(1);
    }
    while(fscanf(fp1, "%d %s %f", &s.roll, s.name, &s.marks) != EOF) {
        fprintf(fp2, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }
    printf("Data copied successfully!\n");
    fclose(fp1);
    fclose(fp2);
    return 0;
}