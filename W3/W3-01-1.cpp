//�ϥ�Java���ҥͽЪ`�N�A�̥~�h�����O(class)�ݩR�W�� main �C
//�p�G�J��W�G�Q�������p�A�Ч��sĶ���լݬ�!! �U�sĶ���S�ʤ��P!!
//�w�]����B�H������B�T�w����O�Ψ����U�����Ϊ��C���ɡA�u�ݷt������O�_�q�L!!
#include<stdio.h>
#include<string.h>
char line[2000];
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
		if(p==1){printf("%s -- is a regular palindrome.\n\n",line);}//printf("%d %d",p,m);}
		if(p==0){printf("%s -- is not a palindrome.\n\n",line);}//printf("%d %d",p,m);}
		//printf("%s -- is ...\n",line);
	}
	return 0;
}