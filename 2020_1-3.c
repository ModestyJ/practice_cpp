#include <stdio.h>
// #include <stdlib.h>

int* unique(int arr[], int size, int* uniqueSize) {
    // create an array to store unique elements
    int* result = (int*) malloc(size * sizeof(int));
    int count = 0;
    int i, j;

    // iterate over the original array and add unique elements to the result array
    for (i = 0; i < size; i++) {
        for (j = 0; j < count; j++) {
            if (arr[i] == result[j]) {
                break;
            }
        }
        if (j == count) {
            result[count] = arr[i];
            count++;
        }
    }

    // update uniqueSize pointer to hold the number of unique elements found
    *uniqueSize = count;

    // return the new array with unique elements
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    int uniqueSize;
    int* uniqueArr = unique(arr, size, &uniqueSize);
    int i;

    // print the original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // print the new array with unique elements
    printf("\nNew array with unique elements: ");
    for (i = 0; i < uniqueSize; i++) {
        printf("%d ", uniqueArr[i]);
    }

    // free the memory allocated for the new array
    free(uniqueArr);

    return 0;
}
/*
#include <stdio.h>

int main(void){
    int A[]={4,2,1,5,3,4,1,1,8,6};

    int flag = 0;
    int B[] = {0,0,0,0,0,0,0,0,0,0};
    int i, j;

    for(i=0;i<10;i++) {
        for(j=0;j<10;j++) {
            if(A[i]==B[j]) flag = 1;
        }
        if(flag==0) {
            B[i]=A[i];
            printf("detect!\n");
        }
        flag = 0;
    }

    for(i=0;i<10;i++)
        if(B[i]!=0) printf("%d ", B[i]);

}
*/

