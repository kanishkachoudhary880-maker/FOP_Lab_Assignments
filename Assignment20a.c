// Without using pointers
#include <stdio.h>
void swap(int a, int b) 
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside function:\n");
    printf("a = %d, b = %d\n", a, b);
}
int main() {
    int x = 5, y = 10;
    swap(x, y);
    printf("Outside function:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}