#include<stdio.h>
char tree[1000000][40];
int main(){
	int T;scanf("%d\n\n",&T);
	for(int i=0;i<T;i++){
		int n=0;
		while(gets(tree[n])){
			if(tree[n][0]==0)break;
			n++;
		}
		if(i>0)printf("\n");
		printf("Test Case %d: %d lines\n",i+1,n);
	}
	return 0;

}
