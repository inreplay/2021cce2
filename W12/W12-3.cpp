#include<iostream>
#include<vector>
#include<algorithm>
class Student{
public:
	char n[30];
	int g;
};
Student stu[100];
int main(){
	int n;
	std::cin>>n;
	//std::cout<<"I got n:"<<n;
	for(int i=0;i<n;i++){
		std::cin>>stu[i].n>>stu[i].g;
	}
	for(int i=0;i<n;i++){
		std::cout<<stu[i].n<<" "<<stu[i].g<<"\n";
	}
	return 0;
}
