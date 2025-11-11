#include<stdio.h>
int main(){
    int arr[100],i,j,n;

    printf("enter number size of array:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        printf("enter the value for arr[%d]:",i);
        scanf("%d",&arr[i]);
    }

    printf("the frequency of array elemnts are:\n");

    int key[100]={0};
    for(i=0;i<n;i++){
        if(key[i]==1)
        continue;
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                key[j]=1;
            }
        }
        printf("the frequency of %d is %d\n",arr[i],count);
    }


}