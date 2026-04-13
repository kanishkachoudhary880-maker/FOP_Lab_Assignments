// With pointers
#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    printf("After swapping:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}