#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum (int * arr, int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

void countSort(int * arr, int n) {
    // find max;
    int max = maximum(arr, n);
    
    int i;
    // make an auxilvery array
    int * count = (int *) malloc((max + 1)*sizeof(int));

    // count = (int *)calloc(max*sizeof(int));
    for(i = 0; i < (max + 1); i++) {
       count[i] = 0;
    }


    for(i = 0; i < n; i++) {
        count[arr[i]] = count[arr[i]] + 1;
    }

    // now final
    int j = 0;
    i = 0;
    while(i<= max) {
        if(count[i] > 0) {
            arr[j] = i;
            count[i] --;
            j++;
        } else {
            i++;
        }
    }

}

int main() {
    int arr[] = {9, 1, 4, 14, 4, 15, 6, 23};
    int n = sizeof(arr)/sizeof(int);

    printArray(arr, n);
    countSort(arr, n);
    printArray(arr, n);
    return 0;
}