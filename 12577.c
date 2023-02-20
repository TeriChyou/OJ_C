#include <stdio.h>

int main(){
	char c;
	int n = 0;
	while(scanf("%c", &c) != EOF){
		if(c == '*') break;
		else if(c == 'H'){
			printf("Case %d: Hajj-e-Akbar\n", n + 1);
			n++;
			continue;
		}
		else if(c == 'U'){
			printf("Case %d: Hajj-e-Asghar\n", n + 1);
			n++;
			continue;
		}
	}
	
	return 0;
}
