
#include <stdio.h>

int main() {
    int a[100], i,j,n;

    printf("enter the number of elemnts:");
    scanf("%d",&n);


    for (i = 0; i < 5; i++) {
        printf("Enter the value for element %d: ", i);
        scanf("%d", &a[i]);
        }

    printf("\nArray elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
     }

    for(i = 0 ;i<5;i++)
    {
        int count =0;
        int key = a[i];
        
        for(j= i ; j<5 ; j++)
        {
            if(key ==a[j])
                count++;
                if(a[i]==a[j]){
                    
                }

        }
        printf("frequency of %d is %d\n",key,count);
    }

    return 0;
}