#include<stdio.h>

int main(){
    int arr[5];
    int n;
printf("enter value for n");
scanf("%d",&n);

    printf("enter integers:\n",n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Array elements are:");
    for (int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}