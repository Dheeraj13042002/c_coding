#include<stdio.h>
void merge(int arr[],int b_arr[],int lb,int ub);
int main(void){
    int n;
    printf("Enter the size of array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter random %d numbers ",n);
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int b_arr[n];
    merge(arr,arr,0,n-1);
    return 0;
}
void merge(int arr[],int b_arr[],int lb,int ub){
    int mid;
    mid=(lb+ub)/2;
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
    for(k=lb;k<=ub;k++){
        arr[k]=b_arr[k];
    }    
    for(int i=0;i<ub+1;i++){
        printf("%d",arr[i]);
    }
    
}