#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main(){
	int T, days, P, *h, N = 0; 
	// T for testcases, days for days, P for parties, *h for hartals, N for result
	bool *D;
	scanf("%d", &T);
	for(int i = 0; i < T; i++){
		scanf("%d", &days);
		scanf("%d", &P);
		// get Days and party hartal routines
		
		D = (bool*)malloc(sizeof(bool) * days);
		h = (int*)malloc(sizeof(int) * P);
		
		// mallocs days array and hartal int
		
		for(int j = 0; j < days; j++){
			*(D + j) = false;
		}
		
		// set days array to all false(no hartal)
		
		for(int j = 0; j < P; j++){
			scanf("%d", h + j);
			for(int k = 1; k <= days; k++){
				if(k % *(h + j) == 0) *(D + k) = true;
			}
		}
		
		// get all days to true if hartal
		
		for(int j = 1; j <= days; j++){
			if(j % 6 == 0 || j % 7 == 0) *(D + j - 1) = false;
		}
		
		// get Saturday and Friday false
		
		for(int j = 0; j < days; j++){
			if(*(D + j) == true) N++;
		}
		
		// count Hartals
		
		printf("%d\n", N);
		N = 0;
		free(D);
		free(h);
		
		// remember to free
	}
	
	return 0;
}
