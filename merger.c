#include<stdio.h>

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
int main()
{
    int arr[] = {16, 42, 54, 69, 8, 47, 49};
    merger(&arr[0], 0, 3, 6);
    for(int i = 0; i < 7; i += 1)
        printf("%d ", arr[i]);
}
