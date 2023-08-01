#include <stdlib.h>

int main(){
    int **myArray;
    int rows = 5;
    int cols = 3;
    int i, j;

    // Allocate memory for rows
    myArray = (int **)malloc(rows * sizeof(int *));

    // Allocate memory for columns of each row
    for (i = 0; i < rows; i++) {
        myArray[i] = (int *)malloc(cols * sizeof(int));
    }

    // Initialize values
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            myArray[i][j] = i * cols + j;
        }
    }

    // Deallocate memory
    for (i = 0; i < rows; i++) {
        free(myArray[i]);
    }
    free(myArray);
}
