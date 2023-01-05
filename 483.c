#include <stdio.h>
#include <string.h>

#define MAX_len 256
#define MAX_num 256

int main(){
	char line[MAX_len];
	int cnum[MAX_num], s_len;
	while(scanf("%s", line) != EOF){
		s_len = strlen(line);
		for(int i = 0; i <= s_len; i++){
			printf("%c", line[s_len - i]);
		}
		if(line[s_len - 1] == '.') printf("\n");
	}
	
	return 0;
}

