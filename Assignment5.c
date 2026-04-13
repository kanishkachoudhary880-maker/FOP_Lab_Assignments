#include <stdio.h>
void addition(int r, int c, int a[r][c], int b[r][c]) {
    int i, j;
    printf("Resultant Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}
void saddlePoint(int r, int c, int a[r][c]) {
    int i, j, k, min, col, found = 0;
    for(i = 0; i < r; i++) {
        min = a[i][0];
        col = 0;
        for(j = 1; j < c; j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }
        for(k = 0; k < r; k++) {
            if(a[k][col] > min)
                break;
        }
        if(k == r) {
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }
    if(!found)
        printf("No Saddle Point found\n");
}
void inverse2x2(int a[2][2]) {
    float det, inv[2][2];
    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];
    if(det == 0) {
        printf("Inverse not possible\n");
        return;
    }
    inv[0][0] = a[1][1]/det;
    inv[0][1] = -a[0][1]/det;
    inv[1][0] = -a[1][0]/det;
    inv[1][1] = a[0][0]/det;
    printf("Inverse Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%.2f ", inv[i][j]);
        }
        printf("\n");
    }
}
void magicSquare(int n, int a[n][n]) {
    int i, j, sum = 0, temp;
    for(j = 0; j < n; j++)
        sum += a[0][j];
    for(i = 1; i < n; i++) {
        temp = 0;
        for(j = 0; j < n; j++)
            temp += a[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }
    for(j = 0; j < n; j++) {
        temp = 0;
        for(i = 0; i < n; i++)
            temp += a[i][j];
        if(temp != sum) {
            printf("Not a Magic Square\n");
            return;
        }
    }
    int d1 = 0, d2 = 0;
    for(i = 0; i < n; i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }
    if(d1 == sum && d2 == sum)
        printf("It is a Magic Square\n");
    else
        printf("Not a Magic Square\n");
}
int main() {
    int choice;
    do {
        printf("1. Addition\n2. Saddle Point\n3. Inverse (2x2)\n4. Magic Square\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                int r, c;
                printf("Enter rows and columns: ");
                scanf("%d %d", &r, &c);
                int a[r][c], b[r][c];
                printf("Enter Matrix A:\n");
                for(int i=0;i<r;i++)
                    for(int j=0;j<c;j++)
                        scanf("%d",&a[i][j]);
                printf("Enter Matrix B:\n");
                for(int i=0;i<r;i++)
                    for(int j=0;j<c;j++)
                        scanf("%d",&b[i][j]);
                addition(r, c, a, b);
                break;
            }
            case 2: {
                int r, c;
                printf("Enter rows and columns: ");
                scanf("%d %d", &r, &c);
                int a[r][c];
                printf("Enter Matrix:\n");
                for(int i=0;i<r;i++)
                    for(int j=0;j<c;j++)
                        scanf("%d",&a[i][j]);
                saddlePoint(r, c, a);
                break;
            }
            case 3: {
                int a[2][2];
                printf("Enter 2x2 Matrix:\n");
                for(int i=0;i<2;i++)
                    for(int j=0;j<2;j++)
                        scanf("%d",&a[i][j]);
                inverse2x2(a);
                break;
            }
            case 4: {
                int n;
                printf("Enter order: ");
                scanf("%d",&n);
                int a[n][n];
                printf("Enter Matrix:\n");
                for(int i=0;i<n;i++)
                    for(int j=0;j<n;j++)
                        scanf("%d",&a[i][j]);
                magicSquare(n, a);
                break;
            }
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while(choice != 5);
    return 0;
}