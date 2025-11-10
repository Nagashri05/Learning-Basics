#include<stdio.h>
// ARRAY: used to store multiple values in a single variable
//MULTDIMENSIONL ARRAY:
int main(){
    // int eng=45,hun=45,math=65,scie=33,sst=55;
    // int marks[5]={45,45,65,33,55};

    // printf("value =%d\n",marks[0]);
    // printf("value =%d\n",marks[1]);
    // printf("value =%d\n",marks[2]);
    // printf("value =%d\n",marks[3]);
    // printf("value =%d\n",marks[4]);

    // for(int i=0;i<5;i++){
    //     printf("value =%d\n",marks[i]);
    // }
int table[3][4]={45,65,78,98,34,23,43,23,45,67,889,90};
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        printf("table[%d][%d] is %d \n",i,j,table[i][j]);

    }
}
    return 0;

}