#include<stdio.h>
int main(){
    int i,j;
    int array[4][2];
    for(i=0;i<4;i++){
        printf("Enter Roll and Marks:");
        scanf("%d %d",&array[i][0],&array[i][1]);
        
    }
    for(i = 0;i<4;i++){
        printf("Roll :%d Marks :%d\n",array[i][0],array[i][1]);
    }
    return 0;
}