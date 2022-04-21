#include<stdio.h>
char b[40];
int main(){
	int a;
	scanf("%d\n\n",&a);
	for(int i=1;i<=a;i++){
		if(i>1)printf("\n");
		printf("現在是第%d筆資料\n",i);
		while(gets(b)){
			if(b[0]==0)break;
		}
	}
	return 0;
}
