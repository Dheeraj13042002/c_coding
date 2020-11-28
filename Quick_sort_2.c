#include<stdio.h>
void quickSort(int arr[],int lb,int ub);
int p(int arr[],int lb,int ub);
int main(void)
{
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter random %d numbers ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    quickSort(arr,0,n-1);
    printf("Sorted array ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void quickSort(int arr[],int lb,int ub){
    // int *pi=malloc(ub);
    int loc;
    if(lb<ub){
        loc= p(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}
int p(int arr[],int lb,int ub){
    int temp;
    int pivot=arr[lb];
    int start=lb;
    int end=ub;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    temp = arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;
    return end;
}
