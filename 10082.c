#include <stdio.h>

char sen[1000];
char kb[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main(){
	while(gets(sen)){
		for(int i = 0; sen[i]; i++){
			if(sen[i] == ' ') printf(" ");
			else{
				int j = 0;
				while(sen[i] != kb[j+1]) j++;
				printf("%c", kb[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
