#include<stdio.h>

char a[2000][80];
int main(){
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		gets(a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
	return 0;
}
