#include<stdio.h>
#include<string.h>
char n[100][80];
int g[100];
int main(){
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    //printf("讀到N是: %d\n",N);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",n[i],&g[i]);
        //printf("讀到了 %s %d\n",n[i],g[i])

    }
    for(int k=0;k<N-1;k++){
        for(int i=0;i<N-1;i++){
            if(g[i]<g[i+1]){
                int t=g[i];
                g[i]=g[i+1];
                g[i+1]=t;
                char tn[80];
                strcpy(tn,n[i]);
                strcpy(n[i],n[i+1]);
                strcpy(n[i+1],tn);
            }
        }
    }
    for(int i=0;i<20;i++){
        printf("%s %d\n",n[i],g[i]);
    }
}
