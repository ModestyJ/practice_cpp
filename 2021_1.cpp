#include <iostream>
using namespace std;

int pascal(unsigned int row, unsigned int col) {
    if((col==0) || (row==col)) return 1;
    else return (pascal(row-1, col-1) + pascal(row-1, col));
}

int main () {
    unsigned int nRow;
    cin >> nRow;

    int ** pascal_triangle;
    pascal_triangle = new int*[nRow];
    for(int i=0; i<nRow; i++)
        pascal_triangle[i] = new int[nRow];

    for (unsigned int i=0; i<nRow; i++)
        for (unsigned int j=0; j<i+1; j++)
            pascal_triangle[i][j] = pascal(i, j);
    for (unsigned int i=0; i<nRow; i++)
        for (unsigned int j=0; j<i+1; j++)
            cout << pascal_triangle[i][j] << " ";
        cout << endl;

    for(int i=0; i<nRow; i++)
        delete pascal_triangle[i];
    delete[] pascal_triangle;

    return 0;
}
