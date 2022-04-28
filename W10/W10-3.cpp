#include<stdio.h>
#include<string.h>
class Student{
public:
    int g;
    char n[80];

};
//char n[100][80];
//int g[100];
Student student[100];
int main(){
    FILE * fin = fopen("input.txt","r");
    int N;
    fscanf(fin,"%d",&N);
    //printf("讀到N是: %d\n",N);
    for(int i=0;i<20;i++){
        fscanf(fin,"%s %d",student[i].n,&student[i].g);
        //printf("讀到了 %s %d\n",n[i],g[i])

    }
    for(int k=0;k<N-1;k++){
        for(int i=0;i<N-1;i++){
            if(student[i].g<student[i+1].g){
                Student t=student[i];
                student[i]=student[i+1];
                student[i+1]=t;
            }
        }
    }
    for(int i=0;i<20;i++){
        printf("%s %d\n",student[i].n,student[i].g);
    }
}
