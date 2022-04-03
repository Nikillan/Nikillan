void swap(int *p1, int *p2) //To swap numbers
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void insertionSort(int arr[], int size) //Use this if the given array is partially sorted by default. TC => O(n^2)
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

void selectionSort(int arr[], int size) // Find the k min term TC => O(n^2)
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

void bubbleSort(int arr[], int size) //To find k max term. TC => O(n^2)
{
    int i, j;
    for(i = 0; i < size; i++)
    {
        for(j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
    }
}

void merger(int *arr, int start, int mid, int end)
{
    int ll;
    int rl;
    int ls;
    int rs;
    int k;
    k = start;
    ls = mid - start + 1;
    rs = end - mid;
    int la[ls];
    int ra[rs];
    for(ll = 0; ll < ls; ll += 1)
    {
        la[ll] = arr[k++];
    }
    for(rl = 0; rl < rs; rl += 1)
    {
        ra[rl] = arr[k++];
    }
    ll = rl = 0;
    k = start;
    while(ll < ls && rl < rs)
    {
        if(la[ll] < ra[rl])
            arr[k++] = la[ll++];
        else
            arr[k++] = ra[rl++];
    }
    while(ll < ls) arr[k++] = la[ll++];
    while(rl < rs) arr[k++] = ra[rl++];

}

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
