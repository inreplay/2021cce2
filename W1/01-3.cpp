///123
#include<stdio.h>
char line[2000];
int main(){
    scanf("%s" , line);
    for(int i=0;i<=2000;i++){
        if(line[i]=='2')printf("輸出\n",line);
    }
    return 0;
}
