#include<stdio.h>

// int main(){
//     int x=23;
//     printf("The value is %d",x);
//     return 0;
// }

// int main(){
//     int value;
//     printf("enter the value of integer: ");
//     scanf("%d",&value);

//     printf("The value of integer is %d",value);
//     return 0;
// }


// Data Types in C:
// 1.integer, 2 bytes- 2
// 2.float,4 bytes- 2.44
// 3.character, 1 byte-A,b
// 4.double ,8 bytes-0.12345678900000000000987666654334567

int main(){
    int a;
    float b;
    char c;
    double d;

    printf("enter value for a:");
    scanf("%d",&a);

    printf("Enter the value for b:");
    scanf("%f",&b);

    printf("enter the value for c:");
    scanf(" %c",&c);

    printf("enter the value for d:");
    scanf("%lf",&d);

    printf("the value of a is %d\n",a);
    printf("the value of b is %f\n",b);
    printf("the value for c is %c\n",c);
    printf("the value for d is %lf\n",d);

    return 0;
    
}