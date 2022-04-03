#include<stdio.h>
#include"sorting.h"

void mergeSort(int *arr,int start,int end)
{
    if(start < end)
    {
        int mid;
        mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merger(arr, start, mid, end);
    }
}

void main()
{
    int arr[] = {13, 21, 41, 27, 16, 11, 12};
    mergeSort(arr, 0, 6);








    for(int i = 0; i < 7; i += 1)
        printf("%d ", arr[i]);
}
