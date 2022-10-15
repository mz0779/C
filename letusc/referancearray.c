#include<stdio.h>
void display(int *x);
int main(){
    int array[10];
    for(int i =0;i<10;i++){
    display(&array[i]);
    }
    return 0;

}
void display(int *x){
    
        printf("the element of array : %d\n",*x);
    
}