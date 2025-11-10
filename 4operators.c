#include<stdio.h>

int main(){
    int a,b;

    printf("Enter the value for  a and b:");
    scanf("%d%d",&a,&b);

    // printf("a+b is %d\n",a+b);
    // printf("a-b is %d\n",a-b);
    // printf("a*b is %d\n",a*b);
    // printf("a/b is %d\n",a/b);
    // printf("a%b is %d\n",a%b);
    // printf("+a is %d\n ",+a);//unary plus
    // printf("-a is %d\n",-a);// unary minus
    printf("a++ is %d\n",a++);
    printf("a-- is %d\n",a--);
     return 0;
}