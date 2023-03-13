#include<stdio.h>
int main()
{
    int size,i,j,min,n;

    printf("Enter array element number : ");
    scanf("%d",&size);
    int arr[size];

    printf("Enter array element : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0; i<size-1; i++)
    {
        min = arr[i];
        for(j=i; j<size; j++)
        {
            if(arr[j] <= min)
            {
                min = arr[j];
                n = j;
            }
        }
        arr[n] = arr[i];
        arr[i] = min;
    }

    for(i=0; i<size; i++)
        printf("%d ",arr[i]);
}
