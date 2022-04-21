#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[2001][80];
int compare(const void *p1,const void *p2){
	return strcmp((char*)p1,(char*)p2);
}
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
		char b[80];
		gets(b);
	}
	qsort(a,n,80,compare);
	a[n][0]=0;
	int sum=1;
	for(int i=0;i<n;i++){
		if(strcmp(a[i],a[i+1])==0)sum++;
		else {printf("%s %d\n",a[i],sum);
		sum=1;
		}
	}
	return 0;
}
