#include <stdio.h>

// function prototypes
void displayMatrix(int a[3][3]);
void addMatrix(int a[3][3], int b[3][3]);

int main() {
    int a[3][3] = {{2,4,5},{3,8,12},{11,7,6}};
    int b[3][3] = {{12,7,6},{11,21,8},{4,17,16}};

    printf("Matrix A:\n");
    displayMatrix(a);

    printf("\nMatrix B:\n");
    displayMatrix(b);

    printf("\nSum :\n");
    addMatrix(a,b);

    return 0;
}

void displayMatrix(int a[3][3]) {
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[3][3], int b[3][3]) {
    int c[3][3];
    int rows = 3;
    int cols = 3;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    displayMatrix(c);
}
