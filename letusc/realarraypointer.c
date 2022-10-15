#include<stdio.h>
int main(){
    int num[5]={10,20,30,40,50};
    for(int i=0;i<5;i++){
        printf("address  : %u element : %d ",&num[i],num[i]);
        printf("%d %d ",*(num+i),*(i+num));
        printf("%d\n",i[num]);
    
    }
    return 0;
}