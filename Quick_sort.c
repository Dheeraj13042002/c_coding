#include<stdio.h>
void quickSort(int arr[],int lb,int ub);
int partition(int arr[],int lb,int ub);
int main(void){
    int arr[]={9,7,6,2,27,10,1,4,0,100};
    quickSort(arr,0,9);
    printf("Sorted array ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]); 
    }
    return 0;
}
void quickSort(int arr[],int lb,int ub){
    int loc;
    if(lb<ub){
        loc=partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}
int partition(int arr[],int lb,int ub){
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
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    int temp=arr[lb];
    arr[lb]=arr[end];
    arr[end]=temp;

    return end;
}