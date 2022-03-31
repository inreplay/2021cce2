#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[1000][50];
int compare(const void *p1,const void *p2){
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main(){
	int b;scanf("%d",&b);
	for(int i=0;i<b;i++){
		scanf("%s",a[i]);
	}
	qsort(a,b,50,compare);
	for(int j=0;j<b;j++){
		printf("%s\n",a[j]);
	}
	return 0;
}
