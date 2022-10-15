#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int *j;
    j = &arr[0];
    for(int i=0;i<5;i++){
        printf("Address of %u is associated with %d\n",j,*j);
        j++;
    }
    return 0;
}