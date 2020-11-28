#include<stdio.h>
void insertion_sort(int arr[],int n);
void printArray(int arr[],int n);
void main(){
    int n;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
}
void insertion_sort(int arr[],int n){
    int min,temp;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
     printArray(arr,n);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}