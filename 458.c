#include <stdio.h>

int main(){
	char sen;
	int i;
	while(scanf("%c", &sen) == 1){
		if(sen != '\n'){
			printf("%c", sen - 7);
		}
		else{
			printf("\n");
		}
	}
	
	return 0;
}
