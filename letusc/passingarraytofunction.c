#include<stdio.h>
void display(int *,int);
int main(){
    int array[4]={10,20,30,40};
    display(&array[0],4);
    return 0;
}
void display(int *j,int n){
    for(int i=0;i<=n-1;i++){
        printf("Element %d is %d\n",i,*j);
        j++;
    }
}