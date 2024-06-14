#include <stdio.h>

// function to set matrix rows and collumns
void alocarTamanhoMatriz(int *rows, int *columns){
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", rows);
    getchar();
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", columns);
    getchar();
}

// function to get matrix elements for matrix 1 and 2
void getMatrixElements(int matrix[][10], int row, int column){

   printf("\nEnter elements: \n");

   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}

// function to display de matrix
void displayMatrix(int matrix[][10], int row, int column){
    printf("\nOutput matrix:\n");
    for (int i = 0; i < row; i++){
        printf("\n");
        for (int j = 0; j < column; j++){
            printf("%d ", matrix[i][j]);
        }
    }
}

// function to multiply 2 matrix
void matrixMultiplication(int first[][10], int second[][10], int result[][10], int r1, int c1, int r2, int c2){
    // initializing elements of matrix mult to 0
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            result[i][j] = 0;
        }
    }

    // multiplying first and second matrices and storing it in result
    for (int i = 0; i < r1; i++){
        for (int j = 0; j < c2; j++){
            for (int k = 0; k < c1; k++){
                result [i][j] += first[i][k] * second[k][j];
            }
        }
    }
}


int main(){
    int rows_m1;
    int columns_m1;

    alocarTamanhoMatriz(&rows_m1, &columns_m1);

    int m1[rows_m1][10];

    getMatrixElements(m1, rows_m1, columns_m1);

    displayMatrix(m1, rows_m1, columns_m1);

printf("\n");

    // ---------------------------------------------------------------------------------------------------------------------------------------- //

    int rows_m2;
    int columns_m2;

    alocarTamanhoMatriz(&rows_m2, &columns_m2);    

    int m2[rows_m2][10];

    getMatrixElements(m2, rows_m2, columns_m2);
    
    displayMatrix(m2, rows_m2, columns_m2);

printf("\n\n");

    // ---------------------------------------------------------------------------------------------------------------------------------------- //

    int m3[10][10];

    matrixMultiplication(m1, m2, m3, rows_m1, columns_m1, rows_m2, columns_m2);

    printf("Multiplication: \n");

    displayMatrix(m3, columns_m1, rows_m2);

    return 0;
}
