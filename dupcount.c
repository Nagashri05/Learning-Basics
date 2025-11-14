#include<stdio.h>
#include<string.h>

int main(){
    char str[100];

    int i;
    int vowels=0;
    int cons=0;
    int space=0;
    int digits=0;

    printf("enter the string:");
   fgets(str,sizeof(str),stdin);

    for(i=0; str[i]!='\0'; i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a'  && str[i]<='z')){
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vowels++;
        }
        else {
            cons++;
        }
    }
        else if(str[i]>='0'&& str[i]<='9'){
            digits++;
        }
        else if(str[i]==' '){
            space++;
        }
        
    }
    printf("vowels=%d\n",vowels);
    printf("consonants=%d\n",cons);
    printf("digits=%d\n",digits);
    printf("spaces=%d\n",space);
    return 0;
}