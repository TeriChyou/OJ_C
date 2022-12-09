#include <stdio.h>
#include <stdlib.h>

int main(){
	int t, r; // test cases and 
	int *s;
	
	scanf("%d", &t);
	
	while(t--){
		
		int d = 0; // d = distance sum
		
		scanf("%d", &r);
		s = (int *)malloc(sizeof(int) * r);
		
		for(int i = 0; i < r; i++){
			scanf("%d", s + i);
		}
		for(int i = 0; i < r - 1; i++){
			d = d + (*(s + i + 1) - *(s + i));
		}
		printf("%d\n", d);
	}
	
	return 0;
}
