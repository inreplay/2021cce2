#include<stdio.h>
#include<string>
#include<map>
char na[2001][80];
int main(){
	int n;
	scanf("%d",&n);
	std::map<std::string,int>table;
	for(int i=0;i<n;i++){
		scanf("%s",na[i]);
		table[na(i)]++;
		char b[80];
		gets(b);
	}
	for(const auto & one:table){
		printf("%s %d\n0",table.first,table.second);
	}
}
