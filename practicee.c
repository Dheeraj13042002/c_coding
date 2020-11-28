#include<stdio.h>
void mergeSort(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);
 void printArray(int arr[],int n);
int main(void){
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter random %d numbers ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    return 0;
}
void mergeSort(int arr[],int lb,int ub){
    int mid;
    if(lb<ub){
        mid=(lb+ub)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}
void merge(int arr[],int lb,int mid,int ub){
    int b_arr[5];
    int i=lb,j=mid+1,k=lb;
    while(i<=mid && j<=ub){
        if(arr[i]<=arr[j]){
            b_arr[k++]=arr[i++];
        }
        else{
            b_arr[k++]=arr[j++];
        }
    }
    if(i>mid){
        while(j<=ub){
            b_arr[k++]=arr[j++];
        }
    }
    else{
        while(i<=mid){
            b_arr[k++]=arr[i++];
        }
    }
    // for(int s=0;s<5;s++){
    //     printf("%d ",b_arr[s]);
    // }
    for(int s=lb;s<=ub;s++){
        arr[s]=b_arr[s];
    }    
    printArray(arr,5);
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}