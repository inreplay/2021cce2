#include <stdio.h>
char line[2000];
char mm( char c ){
	switch(c){
		case 'A':return 'A';break;
		case 'B':return ' ';break;
		case 'C':return ' ';break;
		case 'D':return ' ';break;
		case 'E':return '3';break;
		case 'F':return ' ';break;
		case 'G':return ' ';break;
		case 'H':return 'H';break;
		case 'I':return 'I';break;
		case 'J':return 'L';break;
		case 'K':return ' ';break;
		case 'L':return 'J';break;
		case 'M':return 'M';break;
		case 'N':return ' ';break;
		case 'O':return 'O';break;
		case 'P':return ' ';break;
		case 'Q':return ' ';break;
		case 'R':return ' ';break;
		case 'S':return '2';break;
		case 'T':return 'T';break;
		case 'U':return 'U';break;
		case 'V':return 'V';break;
		case 'W':return 'W';break;
		case 'X':return 'X';break;
		case 'Y':return 'Y';break;
		case 'Z':return '5';break;
		case '1':return '1';break;
		case '2':return 'S';break;
		case '3':return 'E';break;
		case '4':return ' ';break;
		case '5':return 'Z';break;
		case '6':return ' ';break;
		case '7':return ' ';break;
		case '8':return '8';break;
		case '9':return ' ';break;
	}

}
int main(){
	while(scanf("%s\n",line)){
		for(int i=0;i<=line[i]!=0;i++){
			char s=mm(line[i]);
			printf("%c = %c",c,s);
		}
	}
return 0;
}
