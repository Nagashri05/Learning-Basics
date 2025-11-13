#include<stdio.h>
#include<string.h>

int main(){

    int i,j;
    char temp;
    char string[100];

    printf("enter the elements of the string: ");
    scanf("%s",string);

    int n=strlen(string);
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(string[i]>string[j]){
                temp=string[i];
                string[i]=string[j];
                string[j]=temp;
            }
        }
    }
    printf("the sorted string is: %s ",string);
  return 0;

}