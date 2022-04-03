#include<stdio.h>
#include"sorting.h"
void bubblSort(int arr[], int size)
{
    int i, j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

int main()
{
    int arr[] = {20, 12, 6, 48, 10};
    int k = 3;
    int size;
    int i;
    size = sizeof(arr) / sizeof(arr[0]);
    bubblSort(&arr[0], size);

   printf("%d ", arr[size - k]);
    //for(i = 0; i < size; i++)
      //  printf("%d ", arr[i]);
}
