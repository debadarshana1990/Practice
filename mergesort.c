/* merge sort */
#include <stdio.h>
void mergesort(int arr[],int l,int r);
void merge(int arr[],int l,int m,int r);
int main()
{
    int arr[6] = {11,1,22,2,3,33};
    int i;
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,arr_size-1);
    for(i = 0; i < 6; i++)
        printf("%d ",arr[i]);
    return 0;
}

void mergesort(int arr[],int l,int r)
{
    int m;
    if(l < r)
    {
        m = (l+r)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,m,r);
    }
}
void merge(int arr[],int l,int m,int r)
{
    int n1= m-l +1;
    int n2 = r -m;
    int i,j,k;
    int L[n1],R[n2];
    for(i = 0; i < n1;i++)
    {
        L[i] = arr[l + i];
    }
    for(i = 0; i < n2;i++)
    {
        R[i] = arr[m + 1 + i];
    }
    i = j = k = 0;
    while((i < n1) && (j < n2))
    {
        
        if(L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
        
        
        
        
        
        
    }
        while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    /* Copy the remaining elements of R[], if there
    are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
