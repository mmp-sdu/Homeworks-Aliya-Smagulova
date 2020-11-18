#include <stdio.h>
#include <stdlib.h>
 
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1; //2-0+1=3
    int n2 = r - m; //5-2=3
 
    int L[n1], R[n2];
 

    for (i = 0; i < n1; i++) //L[0]=arr[0]=12 L[1]=arr[1]=11
    {  
        L[i] = arr[l + i]; //L[2]=arr[2]=13 
    } //L 
        
    for (j = 0; j < n2; j++)  //R[0]=arr[3] R[1]=arr[4]
    //R[2]=arr[5]
    //R 
    {
        R[j] = arr[m + 1 + j];
    }
 
    
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {  //
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++; //i=0
        }
        else {
            arr[k] = R[j];
            j++; //j=1 j=2
        }
        k++;//k=1 k=2
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
 
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    printf("Given array is \n");
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    printf("\nSorted array is \n");
    printArray(arr, arr_size);
    return 0;
}