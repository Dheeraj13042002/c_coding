#include<stdio.h>
void mergeSort(int arr[],int lb,int ub);
void merge(int arr[],int lb,int mid,int ub);
void main(){
    int arr[5]={9,12,5,0,3};
    // int len=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
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
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    int b_arr[5];
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
 for(int k=lb;k<=ub;k++){
    arr[k]=b_arr[k];
 }
}