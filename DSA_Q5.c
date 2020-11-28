#include<stdio.h>
int main(void){
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    int arr[n],b_arr[n],count=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            b_arr[n]=arr[i];
            count++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            b_arr[count++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",b_arr[i]);
    }
    return 0;
}