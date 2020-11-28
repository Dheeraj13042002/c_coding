#include<stdio.h>
void main(){
    int n,temp;
    printf("Print array size ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=i;j>0 && arr[j-1]>arr[j];j--){
            temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}