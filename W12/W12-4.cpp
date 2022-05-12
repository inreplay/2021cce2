#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;//¨ú¥Nstd::
class Student{
public:
	char n[30];
	int g;
};
Student stu[100];
int main(){
	int n;
	cin>>n;
	//std::cout<<"I got n:"<<n;
	for(int i=0;i<n;i++){
		cin>>stu[i].n>>stu[i].g;
	}
	for(int i=0;i<n;i++){
		cout<<stu[i].n<<" "<<stu[i].g<<endl;
	}
	return 0;
}
