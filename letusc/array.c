#include<stdio.h>
void display();
int main(){
    int array[10];
    for(int i = 0;i<=9;i++){
        display(array[i]);
    }
    return 0;
}
void display(int x){
    static int y = 1;
    printf("the %d element is : %d\n",y, x);
    y+=1;
}