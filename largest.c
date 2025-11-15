#include<stdio.h>

int main(){
    int arr[100];
    int n,i,j,largest;
   

    printf("enter the number of elements in the array:");
    scanf("%d",&n);

    printf("enter the elements for array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     largest=arr[0];
    for (i=1;i<n;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
   
}
 printf("largest is %d\n",largest);
return 0;

}
