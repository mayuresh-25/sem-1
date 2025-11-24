#include<stdio.h>

/* NAME: MAYURESH DEVRUKHKAR
 COMPS   DIV: C
 UIN:251PO71   ROLL NO: 60 
*/
void addMatrix(int mat1[2][2], int mat2[2][2], int sum[2][2]) {

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

}

int main() {

    int m1[2][2], m2[2][2], result[2][2];

    printf(“Enter the values for first matrix”);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf(“%d”, &m1[i][j]);
        }
    }

        printf(“Enter the values for second matrix”);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf(“%d”, &m2[i][j]);
        }
    }

    addMatrix(m1, m2, result);

        printf(“Result: “);
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf(“%d”, result[i][j]);
        }
    }

    return 0;
}