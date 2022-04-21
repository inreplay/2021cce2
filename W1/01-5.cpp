#include<stdio.h>
#include<string.h>

char line[2000];
int main(){
	int aa=0;
	while(scanf("%s",line )==1){
			int n=strlen(line);
			int a=0;
			for(int i=0;i<n;i++){
				if(line[i]=='2')a++;
			}
			printf("%d\n",a);aa+=a;
	}
	printf("Total: %d\n",aa);

return 0;
}
