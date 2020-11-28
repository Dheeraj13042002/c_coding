#include<stdio.h>
int main(void){
    int T,n,count=0,count2=0,count3=0;
    printf("Enter the test cases ");
    scanf("%d",&T);
    for(int i=0;i<T;i++){
        printf("Print array size ");
        scanf("%d",&n);
        int arr[n];
        int b_arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
       for(int i=0;i<count;i++){
           b_arr[i]=0;
       }
       for(int i=0;i<n;i++){
           if(arr[i]==1){
               count2++;
           }
       }
       int val=count+count2;
       for(int i=count;i<val;i++){
           b_arr[i]=1;
       }
    
    for(int i=0;i<n;i++){
            if(arr[i]==2){
                count3++;
            }
        }
    for(int i=val;i<n;i++){
       b_arr[i]=2;
       }
    for(int i=0;i<n;i++){
        arr[i]=b_arr[i];
    }   
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }   
}
    return 0;
}