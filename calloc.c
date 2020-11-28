#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,n;
    int *element;
    printf("Enter the number of memory you want to allocate ");
    scanf("%d",&n);
    element=(int*)calloc(n,sizeof(int));
    // free(element);

    if(element ==NULL){
        printf("Not enough memory");
        exit(0);
    }

    for(i=0;i<n;i++){
        scanf("%d",element+i);
    }
    //  free(element);
    for(int j=0;j<n;j++){
        // if(*element<*(element+j)){
        //     *element =*(element+j);
        // }
        printf("%d ",*(element+j));
    }
    // printf("Largest value is %d ",*element);
    return 0;
}