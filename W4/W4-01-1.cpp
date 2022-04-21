#include<stdio.h>
char a[20000];
int main(){
	int t=1;
	while(gets(a)){
		if(t>1)printf("\n");
		int ans[256]={};
		for(int i=0;a[i]!=0;i++){
				char c=a[i];
				ans[c]++;
		}

		for(int k=128;k>=32;k--){
				if(ans[k]!=0)printf("%d %d\n",k,ans[k]);
		}
		t++;
	}
return 0;
}
