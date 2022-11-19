#include <stdio.h>
#include <string.h>

int main(void){
	char sen[100];
	int judge;
	
	while(gets(sen) != EOF){
		for(int i = 0; i < strlen(sen); i++){
			if(sen[i] == '"'){
				if(judge == 0){
					printf("``");
					judge = 1;
				}
				else{
					printf("''");
					judge = 0;
				}
			}
			else{
				printf("%c", sen[i]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
