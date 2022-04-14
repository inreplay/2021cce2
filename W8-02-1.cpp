#include<stdio.h>
int a[3];
int main(){
    int aa;
    for(int i=0;i<3;i++){
        scanf("%d",&aa);
        a[i]=aa;
    }
    for(int i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
}
