#include <stdio.h>
#include <stdlib.h>
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void selectSort(int arr[],int n)
{
    printf("Running Sort\n");
    int indexOfMin,temp;
    for(int i=0;i<n;i++)
    {
        indexOfMin=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[indexOfMin])
            {
                indexOfMin=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[indexOfMin];
        arr[indexOfMin]=temp;
    }
}
int main()
{
    int arr[]={20,10,30,15,22};
    int n=5;
    printArray(arr,n);
    selectSort(arr,n);
    printArray(arr,n);
    return 0;
}
