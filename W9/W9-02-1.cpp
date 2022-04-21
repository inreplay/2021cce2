#include<stdio.h>
int a[10]={9,1,2,5,6,3,8,7,4,0};
int main(){
    int n=10;

    for(int j=0;j<10;j++){
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                sum++;
            }
        }
        if(sum==0)break;
        for(int i=0;i<n;i++) printf("%d ",a[i]);
        printf("\n");
    }
}
