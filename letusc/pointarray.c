#include<stdio.h>
int main(){
    int i = 5 ,*x;
    float j = 1.5,*y;
    char k = 'c',*z;
    printf("Orginal value   of i is : %d\n",i);
    printf("Orginal value   of j is : %f\n",j);
    printf("Orginal value   of k is : %c\n",k);
    x = &i;
    y = &j;
    z = &k;
    printf("Orginal address of i is : %u\n",x);
    printf("Orginal address of j is : %u\n",y);
    printf("Orginal address of k is : %u\n",z);

    x++;
    y++;
    z++;

    printf("New     address of i is : %u\n",x);
    printf("New     address of j is : %u\n",y);
    printf("New     address of k is : %u\n",z);

    return 0;
}