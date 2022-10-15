#include<stdio.h>
int main(){
    int i = 5,*x,*y;
    printf("Value of i :                 :%d\n",i);
    x = &i;
    printf("Address of i                 : %u\n",x);
    printf("Value of i                   : %d\n",*x);
    x = x +1;
    printf("Address of i after increment : %u\n",x);
    printf("Value of i after increment   : %d\n",*x);
    x = x+9;
    printf("Address of i after increment : %u\n",x);
    printf("Value of i after increment   : %d\n",*x);
    y = x+1;
    printf("Address of i after increment : %u\n",y);
    printf("Value of i after increment   : %u\n",*y);
    return 0;
}