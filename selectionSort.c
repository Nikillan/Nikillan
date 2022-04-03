#include<stdio.h>
#include"sorting.h"

void selectionSort(int arr[], int size)
{
    int i;
    int j;
    int min_idx;
    for(i = 0; i < size; i++)
    {
        min_idx = i;
        for(j = i + 1; j < size; j++)
        {
            if(arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        swap(&arr[min_idx], &arr[i]);
    }
}

int main()
{
    int arr[] = {20,12,6,48,10};
    int size;
    int i;
    size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(&arr[0], size);
    for(i = 0; i < size; i++)
        printf("%d ", arr[i]);
}
