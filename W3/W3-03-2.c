#include<stdio.h>
char a[2000];
int aa[256];
int main(){
	int t=1;
	while(gets(a)){
		if(t>1)printf("\n");
		for(int i=32;i<128;i++)aa[i]=0;
		for(int j=0;a[j]!=0;j++){
			char c =a[j];
			aa[c]++;
		}
		for(int c=32;c<128;c++){
			if(aa[c]>0)printf("%d %d\n",c,aa[c]);
		}
		t++;
	}

}
