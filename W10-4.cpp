#include<stdio.h>
#include<algorithm>
#include<vector>
class Student{
public:
    int g;
    char n[80];

};
//char n[100][80];
//int g[100];
//Student student[100];
bool compare(Student a,Student b){
    return (a.g>b.g);
}
int main(){
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    //printf("讀到N是: %d\n",N);
    std::vector<Student> student(20);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",student[i].n,&student[i].g);
        //printf("讀到了 %s %d\n",n[i],g[i])

    }

    std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<20;i++){
        printf("%s %d\n",student[i].n,student[i].g);
    }
}
