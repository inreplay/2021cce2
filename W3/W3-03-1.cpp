#include<stdio.h>
char a[2000];
int main(){
	int t=1;
	while(gets(a)){
		if(t>1)printf("\n");
		printf("²Ä%dµ§¸ê®Æ\n",t);
		t++;
	}

}
