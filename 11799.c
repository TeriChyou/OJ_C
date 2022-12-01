#include <stdio.h>


int main(){
	int c, s[10000], t; // c for case, s for speed
	int max;
	
	scanf("%d", &c);
	for(int i = 0; i < c; i++){
		scanf("%d", &t);
		
		for(int j = 0; j < t; j++){
			scanf("%d", &s[j]);
		}
		
		for(int j = 0; j < t; j++){
			if(max < s[j]) max = s[j];
		}
		
		printf("Case %d: %d\n", i + 1, max);
		max = 0;
	}
}
