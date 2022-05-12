#include <stdio.h>
#include <vector>
#include <algorithm>
class Student{
public:
	char n[30];
	int g;
};
bool compare(Student a,Student b){
	return a.g>b.g;
}
int main(){
	int n;
	scanf("%d",&n);
	std::vector<Student> stu(n);
	for(int i=0;i<n;i++){
		scanf("%s %d",stu[i].n,&stu[i].g);
	}
	std::stable_sort(stu.begin(),stu.end(),compare);
	for(int i=0;i<n;i++){
		printf("%s %d\n",stu[i].n,stu[i].g);
	}
}
