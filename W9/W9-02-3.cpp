#include<stdio.h>
char a[100][80];
int b[100];
int main(){
	int aa;scanf("%d",&aa);
	for(int i=0;i<aa;i++){
		scanf("%s %d",a[i],&b[i]);
	}
	for(int k=0;k<aa;k++){
		for(int i=0;i<aa-1;i++){
			if(b[i]<b[i+1]){
				int temp=b[i];
				b[i]=b[i+1];
				b[i+1]=temp;
			}
		}
	}
	for(int i=0;i<aa;i++){
		printf("%s %d\n",a[i],b[i]);
	}
	return 0;
}
