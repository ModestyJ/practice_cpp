#include <iostream>

int main(){
    ////////////////////////
    // 1D array
    int *myArray;
    int size = 10;

    // Allocate memory for the array
    myArray = new int[size];

    // Initialize values
    for (int i = 0; i < size; i++) {
        myArray[i] = i * 2;
    }

    // Deallocate memory
    delete[] myArray;


    ////////////////////////
    // 2D array
    int **myArray2D;
    int rows = 5;
    int cols = 3;

    // Allocate memory for rows
    myArray2D = new int*[rows];

    // Allocate memory for columns of each row
    for (int i = 0; i < rows; i++) {
        myArray2D[i] = new int[cols];
    }

    // Initialize values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            myArray2D[i][j] = i * cols + j;
        }
    }

    // Deallocate memory
    for (int i = 0; i < rows; i++) {
        delete[] myArray2D[i];
    }
    delete[] myArray2D;
}
