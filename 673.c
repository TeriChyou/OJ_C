#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int t;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++){
		char line[129] = {0};
		scanf("%s", line);
		
		int stack[129];
		int top = 0;
		int valid = 1;
		
		for(int j = 0; j < strlen(line); j++){
			char c = line[j];
			if(c == '(' || c == '[') stack[top++] = c;
			else if(c == ')' || c == ']'){
				if((c == ')' && stack[top - 1] != '(') || (c == ']' && stack[top - 1] != '[')) valid = 0;
				else top--;
			}
		}
		if(valid && top == 0) printf("Yes\n");
		else printf("No\n");
	}
	
	return 0;
}
