//�ϥ�Java���ҥͽЪ`�N�A�̥~�h�����O(class)�ݩR�W�� main �C
//�p�G�J��W�G�Q�������p�A�Ч��sĶ���լݬ�!! �U�sĶ���S�ʤ��P!!
//�w�]����B�H������B�T�w����O�Ψ����U�����Ϊ��C���ɡA�u�ݷt������O�_�q�L!!
#include<stdio.h>
#include<string.h>
char line[2000];
char line1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char line2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";
char mmm( char c ){
    for(int i=0;line1[i]!=0;i++){
        if(c==line1[i])return line2[i];
    }
    return ' ';
}
int mm(){
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(mmm(line[i])!=line[N-1-i])return 0;
	}
	return 1;
}
int pp(){
	int N=strlen(line);
	for(int i=0;i<N;i++){
		if(line[i]!=line[N-1-i])return 0;
	}
	return 1;
}
int main(){
	while(scanf("%s\n",line)==1){
		int p=pp();
		int m=mm();
		if(p==1&& m==1){printf("%s -- is a mirrored palindrome.\n\n",line);}//printf("%d %d",p,m);}
		if(p==0&& m==1){printf("%s -- is a mirrored string.\n\n",line);}//printf("%d %d",p,m);}
		if(p==1&& m==0){printf("%s -- is a regular palindrome.\n\n",line);}//printf("%d %d",p,m);}
		if(p==0&& m==0){printf("%s -- is not a palindrome.\n\n",line);}//printf("%d %d",p,m);}
		//printf("%s -- is ...\n",line);
	}
}
