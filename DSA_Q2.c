#include<stdio.h>
int main(void){
    int temp=0;
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max>arr[i]){
         max=arr[i];   
        }
        if(min <arr[i]){
         min=arr[i]; 
        }   
    }
     printf("min value is %d\n",max);
     printf("max value is %d\n",min);
       for(int i=0;i<n;i++){
            printf("%d\n",arr[i]);
        }
}