#include <stdio.h>
#include <math.h>

int main(){
	float num[101], test = 0;
	int N = 0;
	int temp;
	// num for num in every N, N for test cases; test for scan factor.
	while(scanf("%f", &num[N]) && num[N] != 0){
		if(num[N] > 60000) return 0;
		N++;
		if(N > 100) return 0;
	}
	printf("PERFECTION OUTPUT\n");
	
	for(int i = 0; i < N; i++){
		for(float j = 1; j < num[i]; j++){
			temp = j;
			if((int)num[i] % temp == 0){
				test = test + j;
			}
		}
		for(int k = 0; k < 5 - ceil(log10(num[i])); k++){
			printf(" ");
		}
		if(test < num[i]){
			printf("%.0f  DEFICIENT\n", num[i]);
		}
		else if(test == num[i]){
			printf("%.0f  PERFECT\n", num[i]);
		}
		else{
			printf("%.0f  ABUNDANT\n", num[i]);
		}
		test = 0;
	}
	
	printf("END OF OUTPUT\n");
	
	return 0;
}
