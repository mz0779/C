#include<stdio.h>
void swap(int *,int *);
int main(){
    int a = 29,b = 93;
    swap(&a,&b);
    printf("a = %d b = %d ",a,b);
    return 0;
}
void swap(int *x,int *y){
    int t;
    t = *x;
    *x = *y;
    *y = t;
}