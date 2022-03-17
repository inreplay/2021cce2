#include<stdio.h>
char a[20000];
int main(){
	int t=1;
	while(gets(a)){
		if(t>1)printf("\n");
		int ans[256]={};
		int max=0;
		for(int i=0;a[i]!=0;i++){
				char c=a[i];
				ans[c]++;
				if(ans[c]>max)max=ans[c];
		}
		for(int i=1;i<=max;i++){
			for(int k=128;k>=32;k--){
					if(ans[k]==i)printf("%d %d\n",k,ans[k]);
			}
		}
		t++;
	}
return 0;
}
