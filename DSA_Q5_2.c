#include<stdio.h>
void main(){
    int n;
    printf("Enter array size ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while(i<j){
    if(arr[i]<0){
        i++;
    }
    if(arr[j]>0){
        j--;
    }
    if(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
  }
  for(int i=0;i<n;i++){
      printf("%d ",arr[i]);
  }
}