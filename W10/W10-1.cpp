#include<stdio.h>
char n[100][80];
int g[100];
int main(){
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    //printf("Ū��N�O: %d\n",N);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",n[i],&g[i]);
        //printf("Ū��F %s %d\n",n[i],g[i])

    }
    for(int i=0;i<20;i++){
        printf("%s %d\n",n[i],g[i]);
    }
}
