#include<stdio.h>

void printArray(int * arr, int *n) {
    for(int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// margining two shorted array
void margeSortedArray(int *A, int *B, int *C, int *m, int *n) {
    int i, j, k;
    i = j = k = 0;

    while(i<*m && j<*n) {
        if(A[i] >= B[j]) {
            C[k] = B[j];
            j++;
            k++;
        } else {
            C[k] = A[i];
            i++;
            k++;
        }
    }

    while(i < *m) {
        C[k] = A[i];
        i++;
        k++;
    }

    while(j < *n) {
        C[k] = B[j];
        j++;
        k++;
    }

    printf("\n");
}

int main() {
    // Here Array A and B should be sorted.
    int A[] = {3, 5, 8, 12};
    int m = sizeof(A)/sizeof(int);

    int B[] = {7, 9, 11, 17, 23};
    int n = sizeof(B)/sizeof(int);

    int C[m+n];
    printf("Printing A\n");
    printArray(A, &m);   

    printf("Printing B\n");
    printArray(B, &n);   
    margeSortedArray(A, B, C, &m, &n);

    printf("Printing C\n");
    int k = sizeof(C)/sizeof(int);
    printArray(C, &k);
    return 0;
}