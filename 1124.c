#include <stdio.h>
#include <stdlib.h>

int main(){
	char line[512];
	
	while(fgets(line, 512, stdin)){
		puts(line);
	}
	
	return 0;
}
