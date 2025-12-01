#include <stdio.h>
/*NAME: Mayuresh Dattaram Devrukhkar
COMPS DIV: C
ROLL NO :60
UIN :251P071
*/
int main() {
    int rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrixA[rows][cols], matrixB[rows][cols], resultMatrix[rows][cols];

    printf("Enter elements of Matrix A:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
