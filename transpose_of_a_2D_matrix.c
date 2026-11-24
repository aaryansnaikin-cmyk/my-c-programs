#include <stdio.h>

int main(void) {
    int rows = 2;
    int cols = 3;

    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int trans[3][2];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Original matrix (2x3):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nTranspose matrix (3x2):\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
