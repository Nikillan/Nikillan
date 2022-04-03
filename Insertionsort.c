#include<stdio.h>
void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void insertionSort(int arr[], int size);

int main()
{
    int arr[] = {5, 7, 9, 4, 2, 3};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(&arr[0], size);
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void insertionSort(int arr[], int size)
{
    int i, j, key;
    for(i = 1; i < size; i += 1)
    {
        key = arr[i];
        j = (i - 1);
        while(j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
