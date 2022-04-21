#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[2000][80];
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
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
